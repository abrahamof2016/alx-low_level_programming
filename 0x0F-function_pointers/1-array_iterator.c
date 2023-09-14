#include <stddef.h>
#include "function_pointers.h"
/**
  * array_iterator - executes a function given as a parameter.
  * @array: an array of integer.
  * @size: size of an integer.
  * @action: function pointer.
  * Return: Nothing.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == NULL) || (action == NULL))
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
