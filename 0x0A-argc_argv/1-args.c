#include <stdio.h>
/**
* main - prints the number of args passed to the func
*@argc: count of args passed to the func
*@argv: arg vector
*
*Return: always 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
