#include "lists.h"
#include <stdlib.h>
/**
  * free_list - free a list.
  * @head: a pointe variable.
  **/
void free_list(list_t *head)
{
	list_t *t, *t2;

	t = head;
	while(t != NULL)
	{
		t2 = t->next;
		free(t->str);
		free(t);
		t = t2;
	}
}
