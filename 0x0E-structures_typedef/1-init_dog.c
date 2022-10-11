#include "dog.h"

/**
* init_dog - initializes a variable of type struct dog.
*@d: pointer to variable of type struct dog
*@name: pointer to character name
*@age: pointer to float age
*@owner: pointer to char owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
