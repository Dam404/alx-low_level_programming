#include <stdio.h>

/**
*main - prints all possible different combinations of three digits.
*
*Return: (0)
*/
int main(void)
{
int fig1, fig2, fig3;
for (fig1 = 0; fig1 < 8; fig1++)
{
for (fig2 = fig1 + 1; fig2 < 9; fig2++)
{
for (fig3 = fig2 + 1; fig3 < 10; fig3++)
{
putchar(fig1 + '0');
putchar(fig2 + '0');
putchar(fig3 + '0');
if (fig1 == 7 && fig2 == 8 && fig3 == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);

}
