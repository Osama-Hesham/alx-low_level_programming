#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - new dog
 * @name: input
 * @age: input
 * @owner: input
 * Return: output
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
