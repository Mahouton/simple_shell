#include <stdio.h>
#include <stdlib.h>

/**
 * split_str - Splits a string.
 * @str: the string is to be split
 * @len: the length of the string
 *
 * Return: an array of each word of the string.
 */
char *split_str(char **str, int len)
{
	char *token;
	int arg, byte, index, size = len;

	for (arg = 0; arg < len; arg++)
	{
		for (byte = 0; str[arg][byte]; byte++)
			size++;
	}

	token = malloc(sizeof(char) * size + 1);

	if (token == NULL)
		return (NULL);

	index = 0;

	for (arg = 1; arg < len; arg++)
	{
		for (byte = 0; str[arg][byte]; byte++)
			token[index++] = str[arg][byte];

		token[index++] = '\n';
	}

	token[size] = '\0';

	return (token);
}

/**
 * main - test split_str function
 * @av: a NULL terminated array of strings
 * @ac: the number  of items in av
 *
 * Retunr: Always 0
 */
int main(int ac, char **av)
{
	char *str;

	str = split_str(av, ac);
	printf("%s\n", str);

	return (0);
}
