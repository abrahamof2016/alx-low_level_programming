#include "lists.h"
#include <stdlib.h>
/**
  * add_node - add a node add the beginning of a list.
  * @head: a pointer variable.
  * @str: a pointer variable.
  * Return: an address.
  **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *t;
	unsigned int length = 0;
	t = malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);
	while (str[length])
		length++;
	t->str = strdup(str);
	t->len = length;
	t->next = *head;
	*head = t;
	return (*head);
}
