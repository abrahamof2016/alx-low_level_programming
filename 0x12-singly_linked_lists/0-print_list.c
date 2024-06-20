#include <stdio.h>
#include "lists.h"
/**
  * print_list - writes all the elements of a list_t list to stdout.
  * @h: a pointer variable.
  * Return: an integer value.
  */
size_t print_list(const list_t *h)
{
	const list_t *new;
	size_t counter = 0;

	new = h;
	while (new != NULL)
	{
		if (new->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", new->len, new->str);
		counter++;
		new = new->next;
	}

	return (counter);
}


