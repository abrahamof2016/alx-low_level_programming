#include <stdio.h>
#include "main.h"
/**
  * _isupper - checks a character
  * @c: a character
  * Return: 1 for success 0 otherwise
  */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}


