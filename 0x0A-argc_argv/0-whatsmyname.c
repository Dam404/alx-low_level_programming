#include <stdio.h>
/**
*main - The starting point of my program
*@argc - The number of command-line arguments
*(including the program name)
*@argv - An array containing the command-line arguments
*
*Return: 0 (Indicates successful program)
*/
int main(int argc __attribute__((unused)), char **argv)
{
int name;

for (name = 0; argv[0][name] != '\0'; name++)
{
putchar(argv[0][name]);
}
putchar('\n');
return(0);
}
