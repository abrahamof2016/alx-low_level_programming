#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * *_strcat - concatenates two strings.
  * @dest: a pointer to character.
  * @src: a pointer to character.
  * Return: a character.
  */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
