#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * read_line - Prints #cisfun$, wait for the user enter a command
 *
 * Return: The command enter by user
 */
char  *read_line(void)
{
	char *buffer;
	size_t bufsize = 100;

	buffer = (char *) malloc(bufsize * sizeof(char));
	if (buffer == NULL)
		return (NULL);

	printf("#cisfun$ ");
	getline(&buffer, &bufsize, stdin);

	return (buffer);
}
