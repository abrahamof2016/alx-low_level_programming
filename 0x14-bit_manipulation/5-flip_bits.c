#include "main.h"
/**
  * flip_bits - returns the number of bits you would need to flip
  * to convert a number from one to another.
  * @n: the first number which is going to be converted to m.
  * @m: the second number which is converted from n.
  * Return: number of bits you would need to flip.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x > 0)
	{
		count++;
		x &= (x - 1);
	}
	return (count);
}
