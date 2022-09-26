#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to destination array where content is to be copied
 * @src:pointer to memory area to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}


