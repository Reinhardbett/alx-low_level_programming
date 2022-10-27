#include "lists.h"

/**
  *print_listint - print the elements in a list
  *
  *@h: pointer to first node of our struct 
  *Return: number of nodes in the list
  */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
