#include "main.h"

/**
 * _isalpha - function to know if
 * the character is an alphabet
 *
 * @c: variable to evaluate
 *
 * Return: 1 if it's a letter
 * 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
		if (c >= 97 && c <= 122)
		{	
		return (1);
		}
			else
			{
			return (0);
			}				
}
