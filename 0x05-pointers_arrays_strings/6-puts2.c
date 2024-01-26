#include "main.h"
/**
 *puts2 - Prints every other character of a string, starting with
*the first character.
*@str: Pointer to the string
*/
void puts2(char *str)
{
int a = 0;

while (str[a] != '\0')
{
_putchar(str[a]);
a += 2;
}
_putchar('\n');
}
