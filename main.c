#include "main.h"

#define MAXLINE 1024

/**
 * main - prints a simple shell
 * @ac: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **argv)
{
	(void)ac;
	char *prog_name = argv[0];
	char command[MAXLINE];


	while (1)
	{
		printf("$ ");
		if ((fgets(command, MAXLINE, stdin) == NULL) && ferror(stdin))
			perror("fgets error");
		if (feof(stdin))
		{
			printf("\n");
			exit(0);
		}
		if (command != "exit")
			printf("%s: No such file or directory\n", prog_name);
		else
			break;
	}
	return (0);
}
