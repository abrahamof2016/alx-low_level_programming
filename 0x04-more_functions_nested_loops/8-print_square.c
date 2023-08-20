#include "main.h"
/**
  * print_square - write square to the stdout.
  * @size: an argument of type int.
  * Return: void.
  */
void print_square(int size)
{
	if( size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
