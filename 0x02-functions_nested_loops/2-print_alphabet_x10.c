#include "main.h"
/**
*print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
*
*/
void print_alphabet_x10(void)
{
  char alphabet;
  int numb = 0;
  while (numb < 10)
    {
      for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
      _putchar('\n');
      numb++;
    }
}
