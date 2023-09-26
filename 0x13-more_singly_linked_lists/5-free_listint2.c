#include <stdlib.h>
#include "lists.h"
/**
  * free_listint2 - frees a list.
  * @head: a pointer variable.
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

