#include "main.h"
/**
*string_toupper -  changes lower case of a string to uppercase
*@s: string to be changed
*
*Return: s
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
		i++;
	}
	return (s);
}

