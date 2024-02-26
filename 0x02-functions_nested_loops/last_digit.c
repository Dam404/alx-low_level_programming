#include "main.h"

int print_last_digit(int last)
{
int ld;
last = -last;

ld = last % 10;

_putchar(last + '0');
return (ld);
}
