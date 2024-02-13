#include "main.h"
/**
*_strcpy - Copies the string pointed to by src to the buffer pointed
*to the dest.
*@dest: Pointer to the destination buffer.
*@src: Pointer to the string
*
*Return: Pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
char *pointer = dest;

while (*src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';

return (pointer);
}
