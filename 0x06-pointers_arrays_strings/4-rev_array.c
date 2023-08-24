#include <string.h>
/**
  * reverse_array - reverse the content of an array.
  * @a: a string.
  * @n: an integer.
  */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i <= 7; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
