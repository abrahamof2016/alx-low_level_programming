#include "main.h"
#include <stdio.h>
/**
  * main - check the code.
  * Return: Always 0.
  */
void rev_string(char *s)
{
	int i;

	for (i = 10; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}

