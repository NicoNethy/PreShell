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

	while (1 != EOF)
	{
		printf("$ ");
		characters = getline(&b,&bufsize,stdin);
		printf("%s",buffer);
		if (characters == -1)
			return (-1);
	}
	return(0);
}
