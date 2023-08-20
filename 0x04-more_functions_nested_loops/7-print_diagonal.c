#include "main.h"
#include <stdio.h>
/**
  * print_diagonal - write a digonal to stdout.
  * @n: a character.
  * Return: void.
  */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			_putchar(92);
			_putchar(10);
			if (i != (n - 1))
			{
				for (j = 0; j <= i; j++)
				{
					_putchar(32);
				}
			}
		}
	}
	else
		_putchar(10);
}
