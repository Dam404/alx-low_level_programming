#include "main.h"
/**
*print_diagonal - This function draws a diagonal line on the terminal
*@n: checks the number of times character '\' should be printed.
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
int j;

for (i = 0; i < n; i++)
{

for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');

_putchar('\n');
}

}
}
