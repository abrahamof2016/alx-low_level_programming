#include "lists.h"
/**
  * list_len - writes the number of elements in a linked list.
  * @h: a pointer variable.
  * Return: an integer.
  */
size_t list_len(const list_t *h)
{
	const list_t *t;
	unsigned int counter = 0;

	t = h;
	while (t)
	{
		counter++;
		t = t->next;
	}
	return (counter);
}
