#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - dog struct
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
