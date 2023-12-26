#include "main.h"
/**
*print_sign - prints the sign of the number.
*@n: the number of which the sign will be printed.
*
*Return:(1) and print + if n is greater than 0, 
*and return (-1) and print - if n is less than zero.
*return (0) and print 0 if n is zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
