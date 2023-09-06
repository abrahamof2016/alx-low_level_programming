#include <stdio.h>
#include "main.h"
/**
  * _strcmp - compare two strings.
  * @s1: a string.
  * @s2: a string.
  * Return: an integer.
  */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] != 0)
	{
		for (j = i; j == i; j++)
		{
			if (s1[i] > s2[j])
			{
				return (s1[i] - s2[j]);
			}
			else if (s1[i] < s2[j])
			{
				return (s1[i] - s2[j]);
			}
			else if (s1[i] == s2[j])
				break;
		}
		i++;
	}
	return (0);
}
