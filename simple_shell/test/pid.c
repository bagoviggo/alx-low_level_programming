#include <stdio.h>
#include <unistd.h>

/**
 * main - get parent process id
 *
 * Return: always 0
 */

int main(void)
{
	int p_pid;

	p_pid = getpid();
	printf("Parent Process ID: %u\n", p_pid);

	return (0);
}
