#include "main.h"
/**
*jack_bauer -  prints every minute of the day of Jack Bauer,
* starting from 00:00 to 23:59.
*
*Return: Always (0)
*/
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar((hour / 10) + '0');/*print the tens digits of hour*/
_putchar((hour % 10) + '0');/*print the ones digit of hour*/

_putchar(':');
_putchar((minute / 10) + '0');/*print the tens digits of minute*/
_putchar((minute % 10) + '0');/*print the ones digit of minute*/
_putchar('\n');
}
}
}
