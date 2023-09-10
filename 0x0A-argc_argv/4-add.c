#include <stdio.h>
#include <stdlib.h>
/**
  * main - adds numbers.
  * @argc: counts an argument.
  * @argv: an array of pointer to string.
  * Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if ((*argv[i]) >= 48 && (*argv[i]) <= 57)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}


