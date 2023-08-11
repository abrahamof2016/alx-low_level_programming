#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0 (success)
  */
int main(void)
{
	char i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
