#include <stdio.h>
/**
*main - The starting point of my program
*@argc: The number of command-line arguments (including the program name)
*@argv: An array containing the command-line arguments
*
*Return: 0(Indicates successful program)
*/
int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
