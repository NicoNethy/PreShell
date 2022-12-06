#include "main.h"

/**
 *
 */
int main()
{
	pid_t pidc;
	char *buff = NULL;
	char *b = NULL;
	size_t bufsize = 32;
	char *argv[] = {"/bin/ls", "/usr/", NULL};
	int status;

	while (1 != EOF)
	{
		fork();
		printf("$ ");
		getline(&b,&bufsize,stdin);

		buff = strtok(b, "\n");
		argv[1] = NULL;

		pidc = fork();
		if (pidc == 0)
		{
			if (strcmp(buff, "/bin/ls") == 0)
			{
			execve(buff, argv, NULL);
			}
		}
		else
		{
			wait(&status);
		}
		return (0);
	}
}



