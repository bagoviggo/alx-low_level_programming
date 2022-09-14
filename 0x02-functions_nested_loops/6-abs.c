#include "main.h"

/*
*_abs-outputs absolute value of integer
*@n: integer to be checked
*Return: absolute integer
*/
int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
