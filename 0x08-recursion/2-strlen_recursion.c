#include "main.h"
#include <stdio.h>
/**
* _strlen_recursion - Returns the length of a string recursively
* @s: The string to find the length of
*
* Return: The length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}
