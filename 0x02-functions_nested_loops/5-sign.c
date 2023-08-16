#include <stdio.h>
#include "main.h"
/**
  * print_sign - a function that prints the sign of a number.
  * @n: an argument of type int
  * Return: 1, 0 or -1
  */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar(43);
		return (r);
	}
	else if (n < 0)
	{
		r = -1;
		_putchar(45);
		return (r);
	}
	else
	{
		r = 0;
		_putchar(48);
		return (r);
	}
}
