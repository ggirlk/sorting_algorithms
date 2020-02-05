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
 * partition - pivot elements.
 * @arr: array.
 * @low: low position
 * @high: higher position.
 * Return: int.
 */
int partition(int *arr, int low, int high, size_t size)
{
int pivot = arr[high];
int j, i = low;
for (j = low; j < high; j++)
{
if (arr[j] < pivot)
{
swap_int(&arr[i], &arr[j]);
print_array(arr, size);
i++;
}
}
if (arr[high] < arr[i])
{
swap_int(&arr[i], &arr[high]);
print_array(arr, size);
}
return (i);
}
/**
 * quickSort - sort array.
 * @arr: array.
 * @low: low position
 * @high: higher position.
 * @size: array size
 * Return: nothing.
 */
void quickSort(int *arr, int low, int high, size_t size)
{
if (low < high)
{
int pi = partition(arr, low, high, size);
quickSort(arr, low, pi - 1, size);
quickSort(arr, pi + 1, high, size);
}
}
/**
 * quick_sort - sort array launcher.
 * @array: array of integers.
 * @size: array size.
 * Return: nothing.
 */
void quick_sort(int *array, size_t size)
{
quickSort(array, 0, size - 1, size);
}
