#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap_int - reset n to 98.
 * @a: variable to be swapping with b.
 * @b: variable to be swapping with a.
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}

/**
 * bubble_sort - sorts an array of integers
 * ************* in ascending order using
 * ************* the Bubble sort algorithm
 * @array: array of integer
 * @size: size of array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
for (j = 0; j < size; j++)
{
for (i = 1; i < size; i++)
{
if (array[i - 1] > array[i])
{
swap_int(&array[i - 1], &array[i]);
}
}
print_array(array, size);
}
}
