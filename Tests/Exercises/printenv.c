#include <stdio.h>
#include <unistd.h>

extern char **environ;

/**
 * main - Prints the environment using the global variable environ
 * 
 * Return: Always 0
 */
int main(void)
{

	int i;

	while (environ[i])
	{
		printf("%s\n", environ[i++]);
	}

	return (0);
}

