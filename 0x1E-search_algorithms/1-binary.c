#include <search_algos.h"
#include <stdio.h>

/**
 * binary_search - search for values in sorted array using binary search.
 * @array: pointer to the first element in array to search.
 * @size: array size.
 * @value: value to search.
 * Return: index of value 
 * or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (bin_search_recursive(array, 0, size, value));
}

/**
 * bin_search_recursive - recursively use binary search to find a number.
 * @array: pointer to first element in array to search.
 * @start: start indes
 * @end: end index
 * @value: value to find.
 *
 * Return: index of value or -1 if not found.
 */
int bin_search_recursive(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;
	char *delim;

	if (start >= end)
		return (-1);
	mid
