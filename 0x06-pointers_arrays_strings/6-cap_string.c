#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
  * cap_string - capitalize the word.
  * @a: a string.
  * Return: a character.
  */
char *cap_string(char *a)
{
	int i, l;

	l = strlen(a);
	for (i = 0; i < (l - 1); i++)
	{
		if (((a[i] >= 9) && (a[i] <= 63)) || (a[i] == 123) || (a[i] == 12))
		{
			if (a[i] != 54)
				a[i + 1] = toupper(a[i + 1]);
		}
		else
		{
			a[i] = a[i];
			a[i + 1] = a[i + 1];
		}
	}
	return (a);
}
