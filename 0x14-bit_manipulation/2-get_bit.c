#include "main.h"
/**
  * get_bit - returns value of a bit at a given index.
  * @n: unsigned integer to be converted to it's binary representation.
  * @index: an index of the required bit.
  * Return: an integer.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32 * 8 || !n)
		return (-1);
	return ((n >> index) & 1);
}
