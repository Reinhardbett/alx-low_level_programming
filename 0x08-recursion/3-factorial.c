#include "main.h"

/**
  *factorial - finds the factorial of a num
  *
  *@n: integer to find factorial of
  *Return: 0 or -1 if there is error
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
		if (n == 0 || n == 1)
		{
		return (1);
		}
		n = n * factorial (n - 1);
	return (n);
}
