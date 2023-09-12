#include "main.h"
/**
 * times_table - Prints the multiplication table for 0 to 9
 *
 * Description: This function prints the multiplication table for numbers from
 * 0 to 9 in a specific format.
 */
void times_table(void)
{
int x, y, z, u, d;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
if (z > 9)
{
u = z % 10;
d = (z - u) / 10;
_putchar(44);
_putchar(32);
_putchar(d + '0');
_putchar(u + '0');
}
else
{
if (y != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(z + '0');
}
}
_putchar('\n');
}
}
