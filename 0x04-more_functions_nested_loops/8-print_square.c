#include "main.h"
/**
  * print_square - write square to the stdout.
  * @size: an argument of type int.
  * Return: void.
  */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	_putchar(10);
}
