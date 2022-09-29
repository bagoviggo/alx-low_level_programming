#include "main.h"
/**
*factorial - gives the factorial of a number
*@n: integer to take factorial of
*
*Return: factorial of n
* -1 if n < 0
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if(n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
