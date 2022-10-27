#include "lists.h"

/**
  *listint_len - prints the number of nodes in a linked list
  *
  *@h: pointer to the head node
  *Return: no. of elements in list
  */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
