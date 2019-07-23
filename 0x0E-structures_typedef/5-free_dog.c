#include "dog.h"
/**
 * free_dog - initialize a variable of tyoe struct dog
 * @d: addres of structure
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).age);
		free((*d).owner);
	}
}
