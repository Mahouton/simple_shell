#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

extern char **environ;

/**
 * _getenv - Gets an environement variable
 * @name: the name of environement variable
 *
 * Return: a pointer to the value in the environement
 * or NULL if there is no match
 */
char *_getenv(const char *name)
{
	int i, j, len;
	char *cp, *tmp = NULL;

	if (name == NULL || environ == NULL)
		return (NULL);

	for (i = 0; environ[i] ; i++)
	{
		cp = malloc(sizeof(char) * 256);
		tmp = malloc(sizeof(char) * 256);
		cp = environ[i];
		for (j = 0; cp[j] != '='; j++)
		{
			tmp[j] = cp[j];
		}

		len = &cp - environ;
		if (strncmp(tmp, name, len) == 0)
		{
			return (tmp);
		}
		
	}
	return (NULL);
}
