#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates new data for dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: return pointer with the structure or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd = malloc(sizeof(dog_t));

	if (name != NULL && owner != NULL)
	{
		newd->name = name;
		newd->age = age;
		newd->owner = owner;
		return (newd);
	}
	else
	{
		return (NULL);
	}
	return (newd);
}
