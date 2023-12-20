#include <stdio.h>
/**
 *main - This is my starting point of my code
 *
 *Return: (0) ALWAYS SUCCESSFUL
*/
int main(void)
{
char x = 'a';
for (; x <= 'z'; x++)
{
  if (x != 'e' && x != 'q')
  putchar(x);
}
putchar('\n');
return (0);
}
