#include <stdio.h>
#include "lists.h"
/**
  * print_list - writes all the elements of a list_t list to stdout.
  * @h: a pointer variable.
  * Return: an integer value.
  */
size_t print_list(const list_t *h)
{
	const list_t *t;
	unsigned int counter = 0;

	t = h;
	while (t)
	{
		if (t->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", t->len, t->str);
		counter++;
		t = t->next;
	}
	return (counter);
}


