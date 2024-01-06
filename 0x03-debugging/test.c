#include <stdio.h>
/**
 *multiply_numbers - Multiply two integers together
 *
 *@a: The first integer
 *@b: The second integer
 *
 *Return: the product of the two integer
 */
int multiply_numbers(int a, int b)
{
return (a * b);
}
/**
 *main - entry of my code
 *
 *Return: 0
 */
int main(void)
{
int output;
int a = 9;
int b = 7;

output = multiply_numbers(a, b);
printf("The product of %d and %d is %d\n", a, b, output);

return (0);
}
