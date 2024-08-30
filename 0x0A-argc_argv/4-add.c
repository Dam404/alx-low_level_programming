#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *main - This program adds positive numbers as an arguments.
 *@argc: Argunent count.
 *@argv: Argument vectors.
 *
 *Return: 0 if the code runs successful, and 1 if an error occurs.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int num1, num2;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (!isdigit(argv[num1][num2]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum = sum + atoi(argv[num1]);
	}
		printf("%d\n", sum);
		return (0);
}
