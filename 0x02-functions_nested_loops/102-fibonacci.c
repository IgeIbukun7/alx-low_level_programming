#include <stdio.h>
#include "main.h"

/**
 * main - this prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	long int a, b, c, forward;

	b = 1;
	c = 2;
	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		forward = b + c;
		b = c;
		c = forward;
	}
	return (0);
}
