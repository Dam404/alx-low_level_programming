#include "main.h"

int main(void)
{
int r;

r = _islower('H');
_putchar(r +'0');
r = _islower('c');
_putchar(r + '0');
r = _islower(145);
_putchar(r + '0');
_putchar('\n');
return (0);
}
