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
	int i, j, len1, len2;

	len1 = strlen(haystack);
	len2 = strlen(needle);
	for (i = 0; i < len2; i++)
	{
		for (j = 0; j < len1; j++)
		{
			if (needle[i] == haystack[j])
			{
				haystack = &haystack[j];
				return (haystack);
			}
		}
	}
	return (NULL);
}
