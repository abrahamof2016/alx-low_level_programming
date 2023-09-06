#include "main.h"
#include <string.h>
/**
  * _strstr - a function that locates a substring.
  * @haystack: the main string.
  * @needle: a string.
  * Return: a char.
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len1;

	len1 = strlen(haystack);
	for (i = 0; i == 0; i++)
	{
		for (j = 0; j < len1; j++)
		{
			if (needle[0] == haystack[j])
			{
				return(&haystack[j]);
			}
		}
	}
	return (NULL);
}
