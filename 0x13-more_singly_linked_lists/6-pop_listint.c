#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - deletes the head note of a list.
  * @head: a pointer variable.
  * Return: the deleted data.
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}


