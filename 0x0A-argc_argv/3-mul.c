#include <stdio.h>
#include <stdlib.h>
/**
  * main - writes product of two numbers into stdout.
  * @argc: counts an argument.
  * @argv: an array of pointers to char.
  * Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);

		}
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
