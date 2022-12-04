#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	if (fork() == 0)
		printf("soy un nene\n");
	else
	{
		wait(NULL);
		printf("no soy un nene\n");
		printf("no funcionó\n");
		exit(0);
	}
	printf("funcionó\n");
}
