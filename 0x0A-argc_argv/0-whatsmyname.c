#include <stdio.h>

/**
  *main - print name of program
  *
  *@argc: argument counter
  *@argv: argument vector
  *Return: 0
  */

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%s\n", argv[8]);
	}
	else
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
