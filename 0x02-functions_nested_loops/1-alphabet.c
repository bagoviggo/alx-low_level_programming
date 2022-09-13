#include "main.h"

/**
 *main- entry point
 *Description: Prints the alphabet using _putchar
 *
 *Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
