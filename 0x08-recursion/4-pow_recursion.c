#include "main.h"

/**
  *_pow_recursion - gives the power of an int
  *
  *@x: base number
  *@y: superscript number
  *Return: -1 if y is lower than 0 and 1 if y is 0
  */

int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	n = _pow_recursion(x, y - 1) * x;
	return (n);
}
