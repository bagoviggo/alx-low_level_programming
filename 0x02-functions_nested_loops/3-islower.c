#include "main.h"

/**
 *_islower - checks for lowercase letters
 *@c: character to be checked
 *
 *Return: 1 when lowercase or 0 for uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
