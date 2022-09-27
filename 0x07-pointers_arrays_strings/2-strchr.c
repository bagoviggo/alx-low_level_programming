#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: The c string to be scanned
 * @c: The character to be searched in s
 *
 * Return: a pointer to the matched character
 * or  NULL('\0') if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] != '\0' && s[i] == c)
			return (s + i);

		else if (s[i] != c && s[i] == '\0')
			return ('\0');
	}
	return (0);
}
