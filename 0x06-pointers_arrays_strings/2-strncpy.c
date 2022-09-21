#include "main.h"
/**
*_strncpy - copies n bytes of src to dest
*@n: limit of bytes
*@src: string to be copied
*dest string to copy to
*
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;


	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + 1) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + 1) = '\0';
		i++;
	}
	return (dest);
}
