#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * puts2 - prints a character.
  * @str: a character.
  */
void puts2(char *str)
{
	int i, l;

	l = strlen(str);

	for (i = 0; i <= l; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
