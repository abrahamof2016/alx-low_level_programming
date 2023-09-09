#include <stdio.h>
/**
  * main - writes the name of executable.
  * Return: 0 on success.
  * @argc: counts the number of argument.
  * @argv: an array of pointer to a string.
  */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
