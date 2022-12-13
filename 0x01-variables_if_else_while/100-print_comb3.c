#include <stdio.h>

/**
 * main - program that prints all possible different combinations of 2 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int c = 0;

	int fD;

	int lD;

	while (c <= 99)

	{
	fD = (c / 10 + '0');
	lD = (c % 10 + '0');

	if (fD < lD)
	{
	putchar(fD);
	putchar(lD);

	if (c != 89)
	{
	putchar(',');

	putchar(' ');
											}
	}
	c++;
	}

	putchar('\n');

	return (0);

}
