#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to be copied
 * Return: a pointer to a newly allocated memory space
 */
char *_strdup(char *str)
{
	int len;
	char *newspace;

	len = strlen(str) + 1;
	if (str == NULL)
		return (NULL);
	newspace = malloc(sizeof(char) * len);
	if (newspace == NULL)
		return (NULL);
	strcpy(newspace, str);
	return (newspace);
}
