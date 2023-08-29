#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0 (success)
  */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
			if (j == 9)
			{
				for (k = i + 1; k <= 9; k++)
				{
					for (l = 0; l <= 9; l++)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(32);
						putchar('0' + k);
						putchar('0' + l);
						putchar(44);
						putchar(32);
					}
				}
			}
			else
			{
				for (k = i; k <= 9; k++)
				{
					for (l = j + 1; l <= 9; l++)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(32);
						putchar('0' + k);
						putchar('0' + l);
						putchar(44);
						putchar(32);
					}
				}
			}
	}
	return (0);
}
