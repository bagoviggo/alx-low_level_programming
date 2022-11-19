#include "path.h"

/**
 * main - prints the environment using the global variable environ
 *@ac: number of arguments in av
 *@av: array of string(arguments)
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	unsigned int i;

	i = 0;
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
