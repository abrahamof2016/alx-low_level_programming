#include <stddef.h>
#include "dog.h"
#include <stdio.h>
/**
  * print_dog - prints a struct dog.
  * @d: a pointer to struct dog data type.
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL || d->owner == NULL)
	{
		d->name = NULL;
		d->owner = NULL;
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

