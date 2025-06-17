#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: print 00:00 to 23:59
 * parameter: void
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int heure;
int minute;

for (heure = 0; heure <= 23; heure++)
{
for (minute = 0; minute <= 59; minute++)
{
_putchar((heure / 10) + '0');
_putchar((heur % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}
