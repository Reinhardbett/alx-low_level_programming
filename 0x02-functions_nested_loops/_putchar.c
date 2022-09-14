#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: the character
 *
 * Return: 1 if successful
 * On error, -1 is returned
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
