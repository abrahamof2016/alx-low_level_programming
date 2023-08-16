#include <stdio.h>
#include "main.h"
/**
  * print_last_digit - a function that prints the last digit of a number.
  * @a: an agrument of type int.
  * Return: last digit of a number.
  */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	_putchar('0' + b);
	return (b);
}
