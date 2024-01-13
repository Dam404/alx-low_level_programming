#include "main.h"
/**
*print_square - This function print a square
*foolowed by a new line.
*@size: checks for the size of the square
*if size is 0 or less, the function should print only new line.
*Character '#' to print the square
*/
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int num1;
int num2;
for (num1 = 0; num1 < size; num1++)
{
for (num2 = 0; num2 < size; num2++)
{
_putchar('#');
}


_putchar('\n');
}
}
}
