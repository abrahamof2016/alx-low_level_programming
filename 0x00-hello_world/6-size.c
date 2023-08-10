/**
  * main - Entry point
  * Return: Always 0 (success)
  */
#include <stdio.h>
int main(void)
{
	char ch;
	int i;
	long int li;
	long long int lii;
	float f;
	printf("Size of a char: %d byte(s)\n", sizeof(ch));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(li));
	printf("Size of a long long int : %d byte(s)\n", sizeof(lii));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
