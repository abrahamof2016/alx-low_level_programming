#include "main.h"
/**
  * _strchr - locates a character in a string.
  * @s: a string.
  * @c: a character.
  * Return: a character.
  */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			s = &s[i];
			break;
		}
		i++;
	}
	return (s);
}
