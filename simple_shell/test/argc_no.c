#include <stdio.h>
/**
 * main - print arguments without using ac
 * @ac: number of arguments in av
 * @av: array of strings (arguments)
 * Return: always 0
 */
int main(__attribute__((unused))int ac, char **av)
{
	int i;

	for (i = 1; av[i] != NULL; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
