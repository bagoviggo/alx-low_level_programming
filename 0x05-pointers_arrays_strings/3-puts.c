#include "main.h"

/**
*_puts - writes a sting to the stdout
*@str: pointer for string
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
