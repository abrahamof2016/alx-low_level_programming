#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * factorial - prints factorial of a given number.
  * @n: a number.
  * Return: on success integer.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
