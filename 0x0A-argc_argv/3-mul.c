#include <stdio.h>
#include <stdlib.h>
/**
* main - This is the entry of my program, this program
*multiply two numbers.
*@argc: The number 0of command-line arguments
*@argv: An array containing the command-line argumaents.
*Return: 0 (Indicates successful program) or 1 (Error)
*/
int main(int argc, int *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	int count1 = atoi(argv[1]);
	int count2 = atoi(argv[2]);

	int result = count1 * count2;

	printf("%d\n", result);
	return (0);
}
