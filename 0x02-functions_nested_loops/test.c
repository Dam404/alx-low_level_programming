#include "main.h"
/**
 *main - entry of my program
 *
 *Return: 0 always
 */
int main(void)
{
	int num1;
	int num2;
	int product;
	for (num1 = 0; num1 <= 9; num1++)
	{
	/*_putchar('0');*/
	for (num2 = 0; num2 <= 9; num2++)
	{
	product = num1 * num2;
	if (product <= 81)
	{
	_putchar((product / 10) + '0');
	/*_putchar((product % 10) + '0');*/
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
	return (0);
}
