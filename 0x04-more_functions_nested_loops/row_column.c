#include <stdio.h>

void row_col(int shape);
int main(void)
{
row_col(1);
row_col(5);
row_col(10);

return (0);
}



void row_col(int shape)
{
if (shape <= 0)
{
putchar('\n');
}
else
{
int num1;
int num2;

for (num1 = 1; num1 <= shape; num1++)
{
  for (num2 = shape - num1; num2 > 0; num2--)
{
putchar(' ');
}
  int num3;
  for (num3 = 1; num3 <= num1; num3++)
    {
      putchar('#');
    }
}
}
putchar('\n');
}
