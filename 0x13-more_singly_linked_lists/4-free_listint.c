#include <stdlib.h>
#include "lists.h"
/**
  * free_listint - fress a linked list.
  * @head: a list.
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
