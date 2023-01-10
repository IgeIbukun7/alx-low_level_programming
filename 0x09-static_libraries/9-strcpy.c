#include "main.h"

/**
 * _strcpy- See description
 * @dest:char type string
 * @src: char type string
 * use: Copy the string pointed to by pointer `src` to
 *
 * Return: Pointer to `dest`
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
