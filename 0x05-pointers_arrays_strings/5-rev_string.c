#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * rev_string - reverse string.
  * @s: a string name.
  */
void rev_string(char *s)
{
	int l, i;
	char c;

	l = strlen(s);
	for (i = 0; i <= (l / 2); i++)
	{
		c = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = c;
	}
	puts(s);
}
