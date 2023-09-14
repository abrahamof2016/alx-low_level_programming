#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_numbers - prints numbers followed by a new line.
  * @separator: stores a string.
  * @n: an integer to be printed.
  * Return: nothing.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, unsigned int);

		printf("%d", x);
		if (separator != NULL)
		{
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
