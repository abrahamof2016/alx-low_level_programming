#include "main.h"
#include <string.h>
#include <math.h>
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
		if (b[i] != 48 && b[i] != 49)
			return (0);
		if (b[i] == '1')
		{
			squa = pow(2, j++);
			sum = sum + squa;
		}
		if (b[i] == '0')
			j++;
	}
	return (sum);
}
