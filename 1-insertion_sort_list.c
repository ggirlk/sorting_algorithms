
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked
 * ********************* list of integers in ascending
 * ********************* order using the Insertion sort algorithm
 * @list: d linked list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
listint_t *left, *right;
left = (listint_t *)malloc(sizeof(listint_t *));
right = (listint_t *)malloc(sizeof(listint_t *));
if (list == NULL && left == NULL && right == NULL)
exit(0);

left = (*list)->next;
while (left)
{
right = left->prev;
if (right->n > left->n)
{
node_swap(right, left);
print_list(*list);
left = (*list)->next;
}
left = left->next;
}
}
/**
 * node_swap - swap 2 nodes
 * @left: prev
 * @right: next
 * Return: nothing
 */
void node_swap(listint_t *left, listint_t *right)
{
listint_t *tmp;
tmp = left->prev;
if (tmp)
tmp->next = right;
right->prev = tmp;

left->prev = right;
left->next = right->next;
right->next = left;
if (left->next != NULL)
left->next->prev = left;
}

