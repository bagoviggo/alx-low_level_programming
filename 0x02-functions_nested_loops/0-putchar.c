#include "main.h"

/**
 * main - Entry point
 *Description: Prints "_putchar" with _putchar
 * Return:0
 */

int main(void)
{
	int i = 0;
	char c[9] = "_putchar";

	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
