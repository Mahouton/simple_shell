#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <sys/wait.h>

void sigintHandler(int sig_num);

/**
 * main - Run commands, without any argument.
 *
 * Return: Always 0
 */
int main(void)
{
	int status, i;
	char cmd[256], *tmp = NULL;
	pid_t child_pid;

	signal(SIGQUIT, sigintHandler);

	while (1)
	{
		tmp = read_line();
		for (i = 0; tmp[i] != '\n'; i++)
			cmd[i] = tmp[i];
		
		child_pid = fork();
		if (child_pid == 0)
		{
			char *argv[] = {cmd, NULL};
			execve(argv[0], argv, NULL);
		}
		while (wait(&status) != child_pid);
	}
	return (0);
}

/**
 * sigintHandler - Signal Handler for SIGINT
 * @sig_num: parameter
 *
 */
void sigintHandler( int sig_num)
{
	signal(SIGQUIT, sigintHandler);
}
