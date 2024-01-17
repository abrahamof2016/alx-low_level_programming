#include "dog.h"
#include <stddef.h>
/**
  * init_dog - initializes a user defined variable of type struct dog.
  * @d: a pointer to a struct dog data type.
  * @name: a string.
  * @age: a variable of type float to hold the age of the dog.
  * @owner: a string to hold the name of dog owner.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
