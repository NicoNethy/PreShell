#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t pidc;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	int status;

for (int i = 0; i < 5; i++)
{
	pidc = fork();
	if (pidc > 0)
	{
		printf("father");
	}
	else if (pidc == 0)
	{
	execve(argv[0], argv, NULL);
		sleep(3);
	}
	else
	{
		wait(&status);
		printf("error");
	}
}
	return (0);
}
