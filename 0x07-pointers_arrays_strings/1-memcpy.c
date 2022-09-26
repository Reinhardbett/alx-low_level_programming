#include "main.h"

/**
 * _memcpy - copies memory data
 *
 * @n: bytes to be copied
 * @src: memory area
 * @dest: memory area
 *
 * Return: pointer to 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
