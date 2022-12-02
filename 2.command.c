#include <stdio.h>
#include <string.h>
/**
 *
 */
int main()
{
	char cadena[] = "I AM YOUR FATHER";
	char delimitador[] = " ";
	char *token = strtok(cadena, delimitador);
	
	while(token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delimitador);
	}
}
