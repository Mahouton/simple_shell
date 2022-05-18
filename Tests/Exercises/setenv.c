#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include <errno.h>

/**
 * _setenv - Changes or adds an environment variable
 * @name: the name of the environment variable
 * @value: the value of the environment variable
 * @overwrite: An integer to specify whether the value of name
 * should be changed or removed.
 *
 * Return: 0 on success, or -1 on error.
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	char *cp;

	if (name == NULL || name[0] == '\0' || strchr(name , '=') != NULL || value == NULL)
	{
		errno = EINVAL;
		return (-1);
	}

	if (_getenv(name) != NULL && overwrite == 0)
		return (0);

	unsetenv(name);

	cp = malloc(strlen(name) + strlen(value) + 2);

	if (cp == NULL)
		return (-1);

	strcpy(cp, name);
	strcat(cp, "=");
	strcat(cp, value);

	return ((putenv(cp) != 0 ? -1 : 0));
}
