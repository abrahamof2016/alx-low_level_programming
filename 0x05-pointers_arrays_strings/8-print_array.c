#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * print_array - print n elements of an array of ingegers.
  * @a: a pointer varaiable.
  * @n: an integer variable.
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
