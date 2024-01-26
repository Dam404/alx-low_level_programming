#include "main.h"
#include <stdio.h>
/**
 *print_array - This print 'n' elements an an array of integers
 *followed by a new line
 *@a:Pointer to the array of integers
*@n: Numbers of the e,ements to be printed
*/
void print_array(int *a, int n)
{
int r;

for (r = 0; r < n; r++)
{
printf("%d", a[r]);/*print the current element*/
/*If it's not the last element, print a comma and a space*/
if (r != n - 1)
{
printf(", ");
}
}
printf("\n");
}
	  
