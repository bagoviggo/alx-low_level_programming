#include  "main.h"
/**
*print_array - prints n elements of an arr of int
*@n: address for int type
*@a: pointer for array
*Description: numbers are to be separated by commas and space
*Numbers to be displayed same as they are in the array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
_putchar('\n');
}
