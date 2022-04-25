#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index in 
 * a linked list
 *
 * @head: ptr to ptr to 1st elem in a list
 * @index: the index to be deleted
 *
 * Return: 1 on Success, 0 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (0);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0;node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (0);
		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);

	return (1);
}

