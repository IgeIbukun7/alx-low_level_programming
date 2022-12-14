#include "main.h"

/**
 * print_alphabet- print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; )

	{
	_putchar(alphabet);
	alphabet++;
	}
	_putchar('\n');
}
