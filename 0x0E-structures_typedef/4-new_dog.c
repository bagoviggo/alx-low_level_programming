#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return: pointer to new dog
*
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n1, n2 , i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	
	for (n1 = 0; name[n1]; n1++)
		;
	n1++;
	dog->name = malloc(n1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (n2 = 0; owner[n2]; n2++)
		;
	n2++;
	dog->owner = malloc(n2 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n2; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
