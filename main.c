#include "main.h"

#define MAXLINE 1024

/**
 * main - prints a simple shell
 *
 * Return: Always 0.
 */
int main(void)
{
	char cmdline[MAXLINE];

	while (1)
	{
		printf("$ ");
		if ((fgets(cmdline, MAXLINE, stdin) == NULL) && ferror(stdin))
			perror("fgets error");
		if (feof(stdin))
		{
			printf("\n");
			exit(0);
		}
		//eval(cmdline);
	}
	return (0);
}
