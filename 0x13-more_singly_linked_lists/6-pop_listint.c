#include "lists.h"

/**
  *pop_listint - deletes the first node
  *
  *@head: the first node of a linked list
  *
  *Return: 0 if linked list is empty or data n
  */

int pop_listint(listint_t **head)
{
	listint_t *temp, *temp2;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	temp2 = temp->next;
	n = temp->n;
	free(*head);
	*head = temp2;

	return (n);
}
