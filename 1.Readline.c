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

    printf("$ ");
    characters = getline(&b,&bufsize,stdin);
    printf("%zu characters were read.\n",characters);
    printf("You typed:'%s'\n",buffer);

    return(0);
}
