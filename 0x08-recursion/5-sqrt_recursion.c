#include "main.h"

/**
* sqrt_check - Checks for the square root of n
* @n: The number to find the square root of
* @sqrt: The current guess for the square root
*
* Return: The square root of n, or -1 if n does not have a natural square root
*/
int sqrt_check(int n, int sqrt)
{
if (sqrt * sqrt == n)
return (sqrt);
else if (sqrt * sqrt > n)
return (-1);
else
return (sqrt_check(n, sqrt + 1));
}
/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: The number to find the square root of
*
* Return: The square root of n, or -1 if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
return (sqrt_check(n, 1));
}
