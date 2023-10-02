#include "main.h"
/**
  * clear_bit - sets the value of a bit to 0 at a given index.
  * @n: the bit.
  * @index: an index of a bit.
  * Return: 1 it it worked.
  * -1 if an error occured.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * 32 || !n)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
