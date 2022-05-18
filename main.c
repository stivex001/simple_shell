#include "main.h"

/**
 * main - prints a simple shell
 * @ac: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **argv)
{
	char *prog_name = argv[0];
	char *command;
	size_t len = 100;
	size_t command_char;

	command = malloc(len * sizeof(char));
	if (command == NULL)
		exit(1);

	while (1)
	{
		printf("$ ");
		command_char = getline(&command, &len, stdin);
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
