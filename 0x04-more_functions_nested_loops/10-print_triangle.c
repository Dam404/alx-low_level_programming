#include "main.h"
/**
*print_triangle - this program prints triangle,
*followed by a new line.
*@size: This takes in the size of the triangle
*to be drawn
*if size is 0 or less than, the function should print
*a new line.
*character '#' to print the triangle.
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{

int row;
int column;
int sym;
/*iterate through each row*/
for (row = 0; row < size; row++)
{
/*Print spaces*/
for (column = 0; column < size - row - 1; column++)
{
_putchar(' ');
}
/*print '#' characters*/
for (sym = 0; sym <= row; sym++)

{
_putchar('#');
}

_putchar('\n');
}
}
}
