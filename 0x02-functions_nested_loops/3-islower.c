#include <stdio.h>
#include "main.h"
/**
  * _islower - a function that checks for lowercase character.
  * @c: argument of type int
  * Return: 0 or 1
  */
int _islower(int c)
{
	int r;

	if ((c >= 97) && (c <= 122))
		r = 1;
	else
		r = 0;
	return (r);
}
