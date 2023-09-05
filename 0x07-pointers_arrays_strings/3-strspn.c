#include "main.h"
#include <string.h>
/**
  * _strspn - writes the length of a prefix substring to stdout.
  * @s: a string.
  * @accept: a string.
  * Return: an integer.
  */
unsigned int _strspn(char *s, char *accept)
{
	int counter, i, j, len2;

	counter = 0;
	len2 = strlen(accept);
	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
				counter += 1;
		}
	}
	return (counter);
}
