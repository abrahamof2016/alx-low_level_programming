#include <stdio.h>
/**
  * main - writes number of arguments passed.
  * @argc: counts number of argument.
  * @argv: an array pointer to string.
  * Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", --argc);
	return (0);
}
