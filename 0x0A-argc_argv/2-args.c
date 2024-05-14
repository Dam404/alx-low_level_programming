/**
* main - This is the entry point of my program, this prints all it receives.
*@argc: The number of command-line arguments.
*@argv: An array containing the command-line arguments.
*All arguments are printed, including the first one
*And it-s printed one argument per line, ending with a new line.
*Return: 0 (Indicates successful program)
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
