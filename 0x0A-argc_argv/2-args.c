#include <stdio.h>
/**
  * main - writes all arguments it receives.
  * @argc: counts number of arguments.
  * @argv: an array of pointer to char.
  * Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s", argv[i]);
		printf("\n");
		i++;
	}
	return (0);
}
