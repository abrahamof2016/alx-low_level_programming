#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - search for value in array of integers using linear search
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 * Return: first index where value is located,
 * -1 if value is not present or if array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value Checked array[%lu] = [%d]\n", i, array[i]);
		if (*(array + i) == value)
		{
			return (i);
		}

	}
	return (-1);
}

