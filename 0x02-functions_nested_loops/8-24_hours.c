#include "main.h"
/**
* jack_bauer - Prints the minutes of a 24-hour day
*
* Description: This function prints all the minutes of a 24-hour day in the
* format "HH:MM" where HH represents the hour (00 to 23) and MM represents
* the minute (00 to 59).
*/
void jack_bauer(void)
{
int h,m,s,ms;
for (h = 0 ; h <=2 ; h++)
{
for (m = 0 ; m <= 3 ; m++)
{
for (s = 0 ; s <= 5 ; s++)
{
for (ms = 0 ; ms <= 10 ; ms++)
{
if (ms == 9)
{
continue;
}
_putchar(h + '0');
_putchar(m + '0');
_putchar(':');
_putchar(s + '0');
_putchar(ms + '0');
_putchar('\n');
}
}
}
}
}
