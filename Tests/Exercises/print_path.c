#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

extern char **environ;

/**
 * print_path  - Prints each directory conrained in the environment variable PATH
 *  one directory per line.
 */
void print_path(void)
{
	int i, j, len, k;
	char *cp, *tmp = NULL, *name;

	name = "PATH";
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
			k = 5;
			while (cp[k])
			{
				if (cp[k] == ':')
					cp[k] = '\n';
				printf("%c", cp[k]);
				k++;
			}
			printf("\n");
			break;

		}
		
	}
}
