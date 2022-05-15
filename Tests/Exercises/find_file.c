#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * main - Looks for files in the current path
 * @av: list of arguments
 * @ac: number of arguments
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int i;
	struct stat buffer;

	if (ac < 2)
	{
		printf("Usage: _which filname ...\n");
		return (1);
	}

	i = 1;
	while (av[i])
	{
		printf("%s:", av[i]);
		if (stat(av[i], &buffer) == 0)
			printf(" FOUND\n");
		else
			printf(" NOT FOUND\n");
		i++;
	}

	return (0);
}

