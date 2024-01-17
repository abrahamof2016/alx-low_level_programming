#ifndef DOG_H
#define DOG_H
/**
  * struct dog - a structure.
  * @name: an argument of structure.
  * @age: a float argument of structure.
  * @owner: a character argument of structure.
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
/*** a function prototype ***/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
