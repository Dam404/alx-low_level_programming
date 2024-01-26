#include "main.h"
/**
* _strncpy - Copies a string
* @dest: Pointer to the destination string
* @src: Pointer to the source string
* @n: Maximum number of bytes to be copied from src
*
* Return: Pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
char *pointer = dest;


while (*src != '\0' && n > 0)
{
*dest++ = *src++;
n--;
}


while (n > 0)
{
*dest++ = '\0';
n--;
}
return (pointer);
}
