#include "main.h"
/**
*_strcat - Concatenates two strings
*@dest: Pointer to the destination string
*@src: Pointer to the source string
*
*Return: Pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
char *pointer = dest;

while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';

return (pointer);
}
