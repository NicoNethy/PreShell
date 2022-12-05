#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *
 */
int main()
{
	char buffer[32];
	char *b = buffer;
	size_t bufsize = 32;
	size_t characters;
	char *argv[] = {"/bin/ls", "-a", NULL};

	while (1 != EOF)
	{
		printf("$ ");
		getline(&b,&bufsize,stdin);
		execve(argv[0], argv, NULL);
		
	}
	return(0);
}
