#include <stdio.h>
#include <string.h>
/**
  * _strpbrk - searches a string for any of a set of bytes.
  * @s: a string.
  * @accept: a string.
  * Return: a char.
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j, len2;

	len2 = strlen(accept);
	i = 0;
	while (s[i] != 0)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
