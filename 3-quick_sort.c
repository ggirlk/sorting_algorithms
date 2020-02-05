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
int partition(int *arr, int low, int high)
{
int pivot = arr[high];
int j, i = (low - 1);
for (j = low; j <= high- 1; j++)
{
if (arr[j] < pivot)
{
i++;
swap_int(&arr[i], &arr[j]);
}
}
swap_int(&arr[i + 1], &arr[high]);
return (i + 1);
}
/**
 * quickSort - sort array.
 * @arr: array.
 * @low: low position
 * @size: array size
 * Return: nothing.
 */
void quickSort(int *arr, int low, int high, size_t size)
{
if (low < high)
{
int pi = partition(arr, low, high);
quickSort(arr, low, pi - 1, size);
print_array(arr, size);
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
