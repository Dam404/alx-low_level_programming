#include <stdio.h>
/**
*main - This program prints the numbers from 1 to 100,
*followed by a new line.
*But for the multiples of three it prints "Fizz" instead
*of the number and for the multiple of five it prints "Buzz"
*For numbers which are multiples are both three and five
* it prints "FizzBuzz".
*
*Return: 0
*/
int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz ");
}
else if (num % 3 == 0)
{
printf("Fizz ");
}
else if (num % 5 == 0)
{
printf("Buzz");
if (num >= 100)
break;
else
printf(" ");
}
else
{
printf("%d ", num);
}
}
putchar('\n');
return (0);
}
