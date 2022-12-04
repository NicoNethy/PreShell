#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>


int main(void)
{
	while(1)
	{
		char comando[32];
		printf("$ ");
		scanf(" %127[^\n]", comando);

		if (!strcmp("exit", comando));
		{
			printf("Se acabó.\n");
			break;
			exit(EXIT_SUCCESS);
		}
	}
}
