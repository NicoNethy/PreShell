#include<stdio.h>
#include <string.h>

int main() 
{
	char string[50] = "Hello! We are learning about strtok\n";
	char * token = strtok(string, " ");

	while( token != NULL ) 
	{
		printf( " %s", token );
		token = strtok(NULL," ");
	}
	return 0;
}
