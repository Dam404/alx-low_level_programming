#include <stdio.h>

int main(void)
{
  int myAge = 43;
  int *ptr = &myAge;
  printf("The address of 'myAge is: %p\n", &myAge);
  printf("The value of myAge is: %d\n", myAge);
  printf("The value of ptr is: %p\n", ptr);
 

  return (0);
}
