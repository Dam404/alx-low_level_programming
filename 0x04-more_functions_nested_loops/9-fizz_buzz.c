#include <stdio.h>
/**
 *fizz-buzz- This program prints the numbers from 1 to 100,
 *follwed by a new line.
 *But for the multiples of three it prints "Fizz" instead
 *of the number and for the multiple of five prints "Buzz"
 *For numbers which are multiples are both three and five
 *prints "FizzBuzz".
 *
 *Return: 0
 */
int main(void)
{
  int num;

  for (num = 1; num <= 100; num++)
    {
      if ( num % 3 == 0)
	{
	  printf("Fizz ");
	}
      else if (num % 5 == 0)
	{
	  printf("Buzz ");
	}
      else if ( num % 3 == 0 && num % 5 == 0)
	{
	  printf("FizzBuzz ");
	}
      else
	{
	  printf("%d ", num);
	}
    }
  printf("\n");
  return (0);
}
	  
