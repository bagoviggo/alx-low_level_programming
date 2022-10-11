#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_dog - prints struct dog
*@d: pointer to variable of type struct dog
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
			printf("Age: %.6f\n", d->age);
		}

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
	}
}
