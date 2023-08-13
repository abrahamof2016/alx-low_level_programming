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
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i <= k && (j < l || j == 0))
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
	}
	putchar('\n');
	return (0);
}

