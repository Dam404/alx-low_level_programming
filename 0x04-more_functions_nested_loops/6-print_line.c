#include "main.h"
/**
*print_line - This draws a straight line in the terminal.
*@n: This checks numbers of times the character '_'
*should be printed.
*followed by a new line.
*if n is 0 or less, the function should print only new line.
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;

for(i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
