#include "main.h"
/**
*print_numbers - Print the numbers, from 0 to 9
*followed by a line
*
*/
void print_numbers(void)
{
int num;
for (num = 0; num < 10; num++)
{
_putchar(num + '0');
}
_putchar('\n');
}
