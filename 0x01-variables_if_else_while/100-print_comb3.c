#include <stdio.h>
/**
*main - prints all possible different combinations of two digits.
*
*Return: (0)
*/
int main(void)
{
int sam;
int bro;
for (sam = 0; sam < 9; sam++)
{
for (bro = sam + 1; bro < 10; bro++)
{
putchar(sam + '0');
putchar(bro +'0');
if(sam == 8 && bro == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
