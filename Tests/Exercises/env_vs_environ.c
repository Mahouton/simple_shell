#include <stdio.h>
#include <unistd.h>

extern char **environ;

/**
 * main - prints the adress of env and environ
 * @env: A NULL terminated array of strings
 * @av: list of arguments
 * @ac: number of arguments
 *
 * Return: Always 0
 */
int main(int ac, char **av, char **env)
{
	printf("Adress of env: %p\n", *env);
	printf("Adress of envrion: %p\n", *environ);

	return (0);
}
