#include "main.h"
/**
  * swap_int - swaps the values.
  * @a: contains integer value.
  * @b: contains integer value.
  * Return: void.
  */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
