#include <stdio.h>
#include "function_pointers.h"
/**
  * int_index - searches for an integer.
  * @array: numbers to be searched.
  * @size: size of an array.
  * @cmp: pointer to an integer.
  * Return: an integer.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c;

	if (size <= 0)
		return (-1);
	c = 0;
	for (i = 0; i < size; i++)
	{
		if (cmp == NULL)
			return (-1);
		c = cmp(array[i]);
		if (c == 1)
			return (i);
	}
	return (-1);

}
