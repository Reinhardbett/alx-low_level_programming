#include <stdio.h>

/**
  *main - print the number of arguments
  *
  *@argc: argument counter
  *Return: 0
  */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
