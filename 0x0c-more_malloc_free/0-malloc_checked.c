#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - allocates memory using malloc
*@b: size of memory to be allocated
*
*Return: pointer to allocated memory
* on fail normal process termination wth exit:98 status
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
