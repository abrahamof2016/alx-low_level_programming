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
	int i, len;

	len = strlen(s);
	i = 0;
	while (i <= len)
	{
		if (s[i] == c)
		{
			s = &s[i];
			break;
		}
		if (s[i] == 0)
		{
			return (NULL);
		}
		i++;
	}
	return (s);
}
