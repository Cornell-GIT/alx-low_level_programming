#include <stdio.h>
#include "dog.h"

/**
 * init_dog - this function initializes a variable of type struct dog
 * @d: pointer to the variable
 * @name: name to be initialized
 * @age: age to be initialized
 * @owner: owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
