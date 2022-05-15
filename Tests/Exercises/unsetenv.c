#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

extern char **environ;

/**
 * _unsetenv - Deletes the variable name from the environment
 * @name: the name that will be deleted
 *
 * Return: 0 on succes, or -1 on error
 */
int _unsetenv(const char *name)
{
	char **cp, **str;

	if (name == NULL || name[0] == '\0' || strchr(name, '=') != NULL)
	{
		errno = EINVAL;
		return (-1);
	}

	size_t len = strlen(name);

	for (cp = environ; *cp != NULL; )
		if (strncmp(*cp, name, len) == 0 && (*cp)[len] == '=')
		{
			for (str = cp; *str != NULL; str++)
				*str = *(str + 1);
		}
		else
			cp++;

	return (0);
}
