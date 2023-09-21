#include "lists.h"
#include <stdlib.h>
/**
  * add_node_end - Add a new node at the end of a list.
  * @head: a pointer variable.
  * @str: a pointe variable.
  * Return: an address.
  **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t, *t2;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);
	t = malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);
	t->str = strdup(str);
	if (t->str == NULL)
	{
		free(t);
		return (NULL);
	}
	while (str[length])
		length++;
	t->len = length;
	t->next = NULL;
	if (*head == NULL)
	{
		*head = t;
		return (t);
	}
	t2 = *head;
	while (t2->next)
		t2 = t2->next;
	t2->next = t;
	return (t);
}
