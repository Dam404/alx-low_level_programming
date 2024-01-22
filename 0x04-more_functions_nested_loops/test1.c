#include <stdio.h>

int main(void)
{
  int myAge = 50;
  int *ptr = &myAge;

  printf("Reference: Outputs the memory address of myAge with th pointer: %p\n", ptr);
  printf("Deference: Outputs the value of myAge with the pointer (50): %d\n", *ptr);

  return (0);
}
