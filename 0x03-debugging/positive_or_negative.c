#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
*positive_or_negative - checks the code either positive or negative
*/
void positive_or_negative(int i)
{

if (i == 98)
{
printf("%d is positive", i);
}
else if (i < 98)
{
printf("%d is negative", i);
}
else
{
printf("%d is zero", i);
}
printf("\n");

}
