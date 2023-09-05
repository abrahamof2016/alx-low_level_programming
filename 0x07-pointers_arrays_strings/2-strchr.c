#include "main.h"
#include <string.h>
/**
  * _strchr - locates a character in a string.
  * @s: a string.
  * @c: a character.
  * Return: a character.
  */
char *_strchr(char *s, char c)
{
	int i, l;

	l = strlen(s);
	i = 0;
	while (i < l)
	{
		if (s[i] == c)
		{
			s = &s[i];
		}
		i++;
	}
	return (s);
}
