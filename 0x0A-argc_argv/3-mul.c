#include <stdio.h>
#include <stdlib.h>
/**
* main - print the result of the mul, followed by a new line
*@argc: number of arguments passed to the function
*@argv: argument vector of pointers to strings
*
*Return: 0 if no error
* 1 error
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
