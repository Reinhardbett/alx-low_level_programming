#include <stdio.h>

/**
  *main - print all the arguments
  *@argc: argument counter
  *@argv: argument vector
  *Return: 0
  */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
