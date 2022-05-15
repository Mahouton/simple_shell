#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all command line arguments, without using @ac
 * @av: a NULL terminated array of ftrings
 * @ac: the number of items in @av
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int i;
	(void)ac;

	i = 0;
	while (av[i] != NULL)
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");

	return (0);
}
