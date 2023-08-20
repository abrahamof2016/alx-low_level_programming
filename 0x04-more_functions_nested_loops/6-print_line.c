#include "main.h"
#include <stdio.h>
/**
  * print_line - print a line
  * @n: a character
  * Return: void.
  */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
