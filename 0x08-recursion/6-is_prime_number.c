#include "main.h"
#include <stdio.h>
/**
* is_prime_recursive - Helper function to check
*                    if a number is prime recursively
* @n: The number to check for primality
* @divisor: The current divisor being checked
*
* Return: 1 if the number is prime, 0 otherwise
*/
int is_prime_recursive(int n, int divisor)
{
if (n <= 1)
return (0);
if (divisor * divisor > n)
return (1);
if (n % divisor == 0)
return (0);


return (is_prime_recursive(n, divisor + 1));
}

/**
* is_prime_number - Checks if a number is prime
* @n: The number to check
*
* Return: 1 if the number is prime, 0 otherwise
*/
int is_prime_number(int n)
{

return (is_prime_recursive(n, 2));
}
