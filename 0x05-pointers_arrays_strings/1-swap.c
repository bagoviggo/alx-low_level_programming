#include "main.h"

/**
*swap_int - A func that swaps the value of two intergers
*@a: first param
*@b: second param
*/

void swap_int(int *a, int *b)
{
	*a = *a * *b;
	*b = *a / *b;
	*a = *a / *b;
}
