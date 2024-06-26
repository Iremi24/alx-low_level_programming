#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Search for a value in a sorted array of int
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if value is not present
 */
int interpolation_search(int *array, size_t size, int value)
{
if (array == NULL)
return (-1);

size_t low = 0;
size_t high = size - 1;
size_t pos;

printf("Value checked array[%lu] = [%d]\n", low, array[low]);
printf("Value checked array[%lu] = [%d]\n", high, array[high]);
while (low <= high && value >= array[low] && value <= array[high])
{
pos = low + (((double)(high - low) / (array - array)) * (value - array[low]));
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

if (array[pos] == value)
return (pos);

if (array[pos] < value)
low = pos + 1;
else
high = pos - 1;
}

printf("Value checked array[%lu] is out of range\n", pos);
return (-1);
}
