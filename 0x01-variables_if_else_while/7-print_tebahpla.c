#include <stdio.h>
/**
*main - This is the starting point of my code
*
*Return: (0)
*/
int main(void)
{
char alphabet = 'z';

while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);
}
