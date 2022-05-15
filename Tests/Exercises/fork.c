#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * main - creats 5 child process
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 5; i++)
	{
		if (fork() == 0)
		{
			printf("Child process: %d from parent %d\n", getpid(), getppid());
			return (0);
		}
	}
	for (int j = 1; j <= 5; j++)
		wait(NULL);
	return (0);
}

