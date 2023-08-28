#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * _memset - prints a hex num.
  * @s: a hex to be printed.
  * @n: size to be printed.
  * @b: equivalent hes to be printed.
  * Return: a character.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		if (i % 10)
		{
			_putchar(32);
		}
		if (!(i % 10) && i)
		{
			_putchar(10);
		}
		s[i] = b;
		_putchar(s[i]);
	}
	return (s);
}
