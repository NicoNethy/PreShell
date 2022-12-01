#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/root/holbertonschool-low_level_programming/PreShell/1.Readline", "/usr/", NULL};

	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	return (0);
}
