#include "main.h"

/**
* string_toupper - Changes all lowercase letters of a string to uppercase
* @str: Pointer to the string
*
* Return: Pointer to the resulting string
*/
char *string_toupper(char *str)
{
char *pointer = str;

while (*pointer != '\0')
{

if (*pointer >= 'a' && *pointer <= 'z')
{
*pointer = *pointer - 32;
}
pointer++;
}

return (str);
}
