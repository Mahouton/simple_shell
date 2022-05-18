#include <stdio.h>
#include <unistd.h>

/**
 * int main - executes the command ls -l /tmp
 * in 5 different child processes
 *
 * Return: always 0
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	if (execve(argv[0], argv, NULL) == -1)
		perror("Error:");

	return (0);
}

