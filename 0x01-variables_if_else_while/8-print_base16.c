#include <stdio.h>
/**
*main - This is the starting point of my code
*
*Return: (0)
*/
int main(void)
{
int sam;
char alpha;
for (sam = 0; sam < 10; sam++)
{
putchar(sam + '0');
}
for (alpha = 'a'; alpha < 'g'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
