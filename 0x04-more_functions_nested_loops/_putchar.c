#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character
 *
 * Return: 1 if success
 * if error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
