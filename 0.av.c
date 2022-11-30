#include <stdio.h>
#include <unistd.h>
/**
 * main - Commit
 * @ac: ac
 * @av: av
 * Return: 0
 */
int main(int ac, char **av)
{
	char x = 0;

	while (av[x] != NULL)
	{
		printf("%s\n", av[x]);

		av[x++];
	}
	return (0);
}
