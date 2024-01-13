#include "main.h"
/**
*print_most_numbers - This function print numbers from 0 to 9
*followed by a new line, without including 2 and 4.
*
*/
void print_most_numbers(void)
{
int num;

for (num = 0; num < 10; num++)
{
if (num != 2 && num != 4)
{
_putchar(num + '0');
}
}
_putchar('\n');
}
