#include "main.h"

/**
 * print_last_digit - print the last digit
 *
 * @n: the parameter
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		_putchar(-d + '0');
		return (-d);
	}
	else
	{
		_putchar(d + '0');
		return (d);
	}
}
