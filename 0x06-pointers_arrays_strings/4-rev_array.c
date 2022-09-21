#include "main.h"
/**
*reverse_array - func to reverse elements of array
*@a: integer array to be reversed
*@n:the number of elements of the array
*
*Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0, j;


	n = n - 1;
	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
