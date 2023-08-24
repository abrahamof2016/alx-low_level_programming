#include "main.h"
#include <string.h>
/**
  * string_toupper - change lowercase to uppercase.
  * @a: a string.
  * Return: character.
  */
char *string_toupper(char *a)
{
	int i, l;

	l = strlen(a);
	for (i = 0; i <= (l - 1); i++)
	{
		if ((a[i] >= 97) && (a[i] <= 122))
		a[i] = a[i] - 32;
		else
		a[i] = a[i];
	}
	return (a);
}
