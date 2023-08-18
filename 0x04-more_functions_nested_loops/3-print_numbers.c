#include <stdio.h>
#include "main.h"
/**
  * print_numbers - prints a number from 0 to 0.
  * Return: void.
  */
void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar(10);
}
