#include "main.h"
#include <string.h>
/**
  * binary_to_uint - converts unsigned int to binary number.
  * @b: the binary to be converted.
  * Return: unsigned integer.
  */
unsigned int binary_to_uint(const char *b)
{
	int i, sum, squa, strlength, j = 0;

	strlength = strlen(b);
	sum = 0;
	if (b == NULL)
		return (0);
	for (i = (strlength - 1); i >= 0; i--)
	{
		if (b[i] < 48 && b[i] > 49)
			return (0);
		if (b[i] == 49)
		{
			squa = _pow(2, j++);
			sum = sum + squa;
		}
		if (b[i] == 48)
			j++;
	}
	return (sum);
}
/**
  * _pow - computes the power of a number.
  * @base: a base..
  * @exponent: an exponent.
  * Return: an integer.
  */
int _pow(int base, int exponent)
{
	int i, mul = 1;

	for (i = 0; i < exponent; i++)
	{
		mul = mul * base;
	}
	return (mul);
}

