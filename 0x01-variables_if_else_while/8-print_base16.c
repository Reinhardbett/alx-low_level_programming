#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Print all hex numbers and
 * alphabets in lowercase
 * Return: 0
 */

int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
