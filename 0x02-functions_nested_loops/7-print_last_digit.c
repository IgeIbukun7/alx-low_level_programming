#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @nld: number's last digit result
 *
 * Return: value of the last digit
 */

int print_last_digit(int nld)

{
	int last;

	last = (nld % 10);

	if (last < 0)
	{
		last = (-last);
	}
	_putchar(last + '0');
	return (last);
}
