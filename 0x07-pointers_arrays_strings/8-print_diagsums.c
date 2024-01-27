#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Prints the sum of the two diagonals of a square matrix
* @a: Pointer to the square matrix of integers
* @size: Size of the square matrix
*
* Description: This function calculates and prints the sum of the two diagonals
*              of a square matrix of integers.
*/
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}

printf("%d, %d\n", sum1, sum2);
}
