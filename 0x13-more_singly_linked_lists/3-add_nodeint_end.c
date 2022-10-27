#include "lists.h"

/**
  *add_nodeint_end - adds a node at end of linked list
  *
  *@head: pointer to first node at the list
  *@n: data to be stored in new node
  *
  *Return: element of new node or NULL if error
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (new);
}
