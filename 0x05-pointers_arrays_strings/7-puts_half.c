#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * puts_half - print half of a string.
  * @str: a string.
  */
void puts_half(char *str)
{
	int i, l;

	l = strlen(str);
	if (l % 2 == 0)
	{
		for (i = (l / 2); i <= l; i++)
		{
			if (str[i] != 0)
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((l / 2) + 1); i <= l; i++)
		{
			if (str[i] != 0)
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
