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
	size_t characters;
	char *argv[] = {"/bin/ls", "/usr/", NULL};
	int status;
	//char * token = strtok(buffer, " ");

	while (1 != EOF)
	{
		printf("$ ");
		
		getline(&b,&bufsize,stdin);

		buff = strtok(b, "\n");
		argv[1] = NULL;

		printf("%s\n", buff);

		pidc = fork();
		wait(&status);

		if (pidc == 0)
		{
			if (strcmp(buff, "/bin/ls") == 0)
			{
				execve(buff, argv, NULL);
			}
		}
	}
	return(0);
}
