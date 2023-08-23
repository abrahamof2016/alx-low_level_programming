#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _strcpy - copies a string pointed by src.
  * @dest: a pointer variable.
  * @src: an array of character.
  * Return: a character.
  */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (src);
}
