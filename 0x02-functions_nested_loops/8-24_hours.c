#include "main.h"

/**
 * jack_bauer - this prints every minute of the day in a 24 hour system
 *
 * 24 hours, 60 minutes
 *
 * Return: every minute of the day
 *
 */

void jack_bauer(void)

{
	int H, m;

	for (H = 0; H < 24; H++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((H / 10) + '0');

			_putchar((H % 10) + '0');

			_putchar(':');

			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
