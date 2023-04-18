#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - a function that initialize a vriable of type struct dog
 * @d: points to the struct dog to initialize
 * @name: name of the struct dog to initialize
 * @age: age of the struct dog to initialize
 * @owner: owner of the struct dog to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
