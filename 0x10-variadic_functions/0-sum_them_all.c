#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - sums parametes of a function.
  * @n: an integer parameter to be summed up.
  * Return: an integer.
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, unsigned int);

		sum += x;
	}
	va_end(args);
	return (sum);
}
