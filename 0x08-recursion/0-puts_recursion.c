#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string to be written
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return;
}

