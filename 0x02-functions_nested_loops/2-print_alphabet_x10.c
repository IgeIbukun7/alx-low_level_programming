#include "main.h"

/**
 * print_alphabet_x10- This prints the alphabet 10 times
 *
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alphabet10;
	int i;

	i = 0;

	for (alphabet10 = 'a'; alphabet10 <= 'z'; alphabet10++)
	{
		_putchar(alphabet10);
	}
	while (i < 10)
	{
		_putchar('\n');
		i++;
	}
}
