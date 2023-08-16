#include <stdio.h>
#include "main.h"
/**
  * _isalpha - a function that checks for alphabetic character.
  * @c: an argument of type c.
  * Return: 1 or 0
  */
int _isalpha(int c)
{
	int r;

	if ((c >= 48) && (c <= 122))
	{
		if (((c >= 58) && (c <= 64)) || ((c >= 91) && (c <= 96)))
			r = 0;
		else
			r = 1;
	}
	else
		r = 0;
	return (r);
}


