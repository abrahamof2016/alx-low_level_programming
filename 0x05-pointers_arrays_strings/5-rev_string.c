#include "main.h"
#include <stdio.h>
/**
  * rev_string - reverse string.
  * @s: a string name.
  */
void rev_string(char *s)
{
	int i;

	for (i = 446; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}

