#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 * ************* in ascending order using
 * ************* the Bubble sort algorithm
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j, s;
for (j = 0; j < size; j++)
{
for (i = 1; i < size; i++)
{
if (array[i-1] > array[i])
{
int k = array[i-1];
array[i-1] = array[i];
array[i] = k;
s = 1;
}
else
s = 0;
print_array(array, size);
}
if (s == 0)
break;

}
}
