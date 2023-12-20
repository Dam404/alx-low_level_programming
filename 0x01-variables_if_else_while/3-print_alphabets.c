#include <stdio.h>
/**
*main - The starting point of my code
*
*Return:(0) ALWAYS SUCCESSFUL
*/
int main(void)
{
char x = 'a', y = 'A';

while (x <= 'z')
{
putchar(x);
x++;
}
while (y <= 'Z')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
