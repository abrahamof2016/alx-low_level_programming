#include <stdio.h>
#include <string.h>
/**
  * main - print a string.
  * Return: 1 on success.
  */
int main(void)
{
	char *b;

	b = "and that piece of art is usefull\" - Dora Korpar, 2015-10-19\n";
	fputs(b, stdout);
	return (1);
}
