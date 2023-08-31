#include "main.h"
#include <string.h>
/**
  * _puts_recursion - writes a string to stdout.
  * @s: a string.
  * Return: void.
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
