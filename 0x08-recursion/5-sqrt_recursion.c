#include "main.h"
int square(int j, int k);


/**
* _sqrt_recursion - returns the natural square root of n
*@n: integer to find square root of
*
*Return: sqrt of n
* -1 if n does not have a natural number
*/
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
* square - checks for square root of num
*@k: int to find square root of
*@j: square root
*
*Return: int
*/
int square(int j, int k)
{
	if (j * j == k)
		return (j);
	else if (j * j > k)
		return (-1);
	else
		return (square(k + 1, j));
}

