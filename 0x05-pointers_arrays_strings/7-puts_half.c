#include "main.h"

/**
*puts_half - prints half of a string
*@str: pointer to string
*Description: If odd number of characters, then print half of len
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
