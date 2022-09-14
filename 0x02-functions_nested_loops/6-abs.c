#include "main.h"

/*
*_abs - prints the absolute value of an integer
*@n: integer to be checked
*Return: absolute integer
*/
int _abs(int j)
{
	if (j >= 0)
		return (j);

	else
	{
		j *= -1;
		return (0);
	}
	_putchar('\n');
}
