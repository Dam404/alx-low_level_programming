#include "main.h"
/**
 *puts_half - prints half of a string followed by new line.
*@str: Pointer to the string.
*/
void puts_half(char *str)
{
int length = 0;
int a;
int index;
while (str[length] != '\0')
{
length++;
}
index = (length - 1) / 2 + 1;

for (a = index; a < length; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}

