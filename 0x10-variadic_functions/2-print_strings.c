#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * print_strings - prints a string.
  * @separator: string separator.
  * @n: number of a strings passed to a function.
  * Return: nothing.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char *);

		if (*x)
			printf("%s", x);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

