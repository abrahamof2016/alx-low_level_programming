#include "main.h"
#include <stdio.h>
/**
  * puts2 - prints a character.
  * @str: a character.
  */
void puts2(char *str)
{
	int i;

	for (i = 0; i <= 8; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
