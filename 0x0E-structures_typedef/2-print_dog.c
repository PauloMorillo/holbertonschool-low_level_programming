#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print  variable of tyoe struct dog
 * @d: addres of structure
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name)
		{
			printf("Name: %s\n", (*d).name);
		}
		else
		{
			printf("Name: (nil)");
		}
		printf("Age: %.6f\n", (*d).age);
		if ((*d).owner)
		{
			printf("Owner: %s\n", (*d).owner);
		}
		else
		{
			printf("Owner: (nil)");
		}
	}
}
