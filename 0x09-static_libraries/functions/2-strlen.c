#include "main.h"

/**
*_strlen - checks the length of string
*@s: string to be checked
*Return: lenght of string
*/
int _strlen(char *s)
{
	int i = 0;


	while (s[i])
		i++;

	return (i);
}
