#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 *selection_sort - a function that sorts an array using the Selection sort
 *@array: unsroted array
 *@size: the size of the array divided on the first element
 *Return: nothing
 */
void selection_sort(int *array, size_t size)
{
size_t i, j;
int min_idx, temp;
if (size == 0)
return;

for (i = 0; i < size - 1; i++)
{
min_idx = i;
for (j = i + 1; j < size; j++)
if (array[j] < array[min_idx])
min_idx = j;
temp = array[min_idx];
array[min_idx] = array[i];
array[i] = temp;
print_array(array, size);
}
}
