#include "main.h"
/**
*_strncat - cat string "src" to "dest"
*@src: pointer to string to be cat to dest
*@dest: pointer  to string to be cat to src
*@n: limit of bytes to cat
*
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
