#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * main - Executes the command ls -l /tmp in 5 different child processes.
 *
 * Return: Always 0
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int i, status;
	pid_t child_pid;

	for (i = 1; i <= 5; i++)
	{
		child_pid = fork();
		if (child_pid == 0)
		{
			printf("child : %d parent : %d\n", getpid(), getppid());
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error:");
		}
		while (wait(&status) != child_pid);
	}

	return (0);
}
