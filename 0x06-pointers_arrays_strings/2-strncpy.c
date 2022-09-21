#include "main.h"
/**
*_strncpy - copies n bytes of src to dest
*@n: limit of bytes
*@src: string to be copied
*@dest: string to copy to
*
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + 1) = *(src + i);

	for (; i < n; i++)
		*(dest + 1) = '\0';
	return (dest);
}
