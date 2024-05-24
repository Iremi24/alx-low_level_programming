#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
size_t step = sqrt(size);
size_t prev = 0;

if (array == NULL)
return (-1);

printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
while (array[prev] < value)
{
prev += step;
if (prev >= size)
break;
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
}

size_t start = prev - step;
printf("Value found between indexes [%lu] and [%lu]\n", start, prev);

while (array[start] < value)
{
printf("Value checked array[%lu] = [%d]\n", start, array[start]);
start++;
if (start == size || array[start] > value)
return (-1);
}

if (array[start] == value)
{
printf("Value checked array[%lu] = [%d]\n", start, array[start]);
return (start);
}

return (-1);
}
