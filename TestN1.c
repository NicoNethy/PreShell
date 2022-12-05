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
	//char * token = strtok(buffer, " ");

	while (1 != EOF)
	{
		pidc = fork();


		if (pidc > 0)
		{
			printf("$ ");
		}
		getline(&b,&bufsize,stdin);

		buff = strtok(b, "\n");
		argv[1] = NULL;

		printf("buff = %s\n", buff);

		if (pidc == 0)
		{
			if (strcmp(buff, "/bin/ls") == 0)
			{
				printf("entra aca xd\n");
				execve(buff, argv, NULL);
			}
		}
		else
			printf("error\n");
	}
	return(0);
}
