#include "sort.h"
/**
*selection_sort - a function that sorts an array using the Selection sort
*@array: unsroted array
*@size: the size of the array divided on the first element
*Return: nothing
*/
void selection_sort(int *array, size_t size)
{
int current, temp = 0;
size_t size_loop, element = 0;
for (size_loop = 0; size_loop != size - 1; size_loop++)
{
current = size_loop;
for (element = size_loop + 1; element < size; element++)
{
if (array[current] > array[element])
{
temp = array[current];
array[current] = array[element];
array[element] = temp;
}
}
print_array(array, size);
}
}
