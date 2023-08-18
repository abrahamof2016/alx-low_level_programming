#include <stdio.h>
#include "main.h"
/**
  * print_number - writes integer to stdout.
  * @n: The ingeter to print
  * Return: on succes nothing.
  */
void print_number(int n)
{
	if (n == 0)
		_putchar(0);
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if ((n / 10) && (n  != 0))
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
