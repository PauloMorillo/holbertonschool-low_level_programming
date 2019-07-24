#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - string length
 * @str: input string
 * Return: string length int
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i = i + 1;
	return (i);
}
/**
 * _strcpy - copies string
 * @dest: pointer to new string
 * @from: pointer to string to copy
 * Return: void
 */
void _strcpy(char *dest, char *from)
{
	int i, len = _strlen(from);

	for (i = 0; i <= len; i++)
		dest[i] = from[i];
}
/**
 * new_dog - creates new type of struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = _strlen(name), owner_len = _strlen(owner);
	dog_t *newd;

	newd = malloc(sizeof(dog_t));
	if (newd)
	{
		newd->name = malloc(sizeof(char) * (name_len + 1));
		if (newd->name)
		{
			newd->owner = malloc(sizeof(char) * (owner_len + 1));
			if (newd->owner)
			{
				_strcpy(newd->name, name);
				newd->age = age;
				_strcpy(newd->owner, owner);
				return (newd);
			}
			else
			{
				free(newd->name);
				free(newd);
			}
		}
		else
			free(newd);
	}
	return (NULL);
}
