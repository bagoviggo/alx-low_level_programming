#include "main.h"

/**
*_strcat - concatenates src to dest
*@src: pointer  to string to be cat with dest
@dest: pointer  to string to be cat with src
*
*Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + 1))
		i++;
	while ((*(dest + 1) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}


