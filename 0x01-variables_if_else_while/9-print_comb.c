#include <stdio.h>
/**
*main- This is the starting point of my code
*
*Return: (0)
*/
int main(void)
{
int sam;
for (sam = 0; sam < 10; sam++)
{
putchar(sam + '0');
if (sam == 9)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
