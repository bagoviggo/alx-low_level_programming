#include "main.h"
/**
 *
 *print_sign - main block
 *
 *Description: function that prints the + if n>0, 0 if n==0, - if n < 0
 *
 *Return 1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{	
		_putchar(43);//+ sign in ASCII code
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);//0 in ASCII code
		return (0);
	}
	else 
	{
		_putchar(45);//- sign in ASCII code
		return (-1);
	}
}
