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
listint_t *l, *ltmp;
l = (listint_t *)malloc(sizeof(listint_t *));
ltmp = (listint_t *)malloc(sizeof(listint_t *));
if (l == NULL && ltmp == NULL)
exit(0);

l = (*list)->next;
while (l)
{
ltmp = l->prev;
if (ltmp->n > l->n)
{
node_swap(ltmp, l);
print_list(*list);
l = (*list)->next;
}
l = l->next;
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

