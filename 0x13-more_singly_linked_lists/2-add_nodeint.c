#include "lists.h"

/**
  *add_nodeint - adds a node at the beginning of the linked list
  *
  *@head: the first node of the linked list
  *@n: the integer within the struct
  *Return: head or NULL
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
		return (ptr);
}
