#include "main.h"

/**
 * *_strncpy - A function that copies a string.
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @i: bytes of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int i)

{
	int a;

	for (a = 0; a < i && src[a] != '\0'; a++)
		dest[a] = src[a];
	while (a < i)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);

}
