#include <stdio.h>
/**main - This is my starting point of my code
 *
*Return: (0)
*/
int main(void)
{
int not_char;

for (not_char = 0; not_char < 10; not_char++)
{
putchar(not_char + '0');
}
putchar('\n');
return (0);
}
