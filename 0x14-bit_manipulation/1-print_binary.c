#include "main.h"
/**
  * print_binary - prints the binary representation of a number.
  * @n: unsigned int to be converted to binary.
  *
  * Return: nothing.
  */
void print_binary(unsigned long int n)
{
	if (n > 0)
		print_binary(n >> 1);
	_putchar(48 + (n & 1));
}
