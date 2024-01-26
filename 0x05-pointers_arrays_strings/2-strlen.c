#include "main.h"
/**
 *_strlen - Returns the length of a string.
*@s: Pointer to the string
*
*Return: The length of the string.
*/
int _strlen(char *s)
{
int length;

for (length = 0; *s != '\0'; length++)

s++;

return (length);
}
