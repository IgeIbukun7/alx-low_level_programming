#include <stdio.h>

/**
 * main- Entry here
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int firstNum;

	int secondNum;

	for (firstNum = 0; firstNum < 100 ; firstNum++)

	{
	for (secondNum = firstNum + 1 ; secondNum < 100; secondNum++)

	{
	putchar (firstNum / 10 + '0');
	putchar (firstNum % 10 + '0');
	putchar (' ');

	putchar (secondNum / 10 + '0');

	putchar (secondNum % 10 + '0');

	if (firstNum == 98 && secondNum == 99)

	{

		break;

	}
	putchar(',');

	putchar (' ');

	}

	}

	putchar('\n');

	return (0);
}
