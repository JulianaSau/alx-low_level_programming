#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * Description: cant use more than 1 loop
 * cant use malloc,free or arrays
 * only declare a max of 2 variables in function
 * @head: ptr to the 1st elem in a linked list
 *
 * Return: ptr to 1st node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		/*next now points to the next elem in the list*/
		next = (*head)->next;
		/*assign value of previous elem to next elem*/
		(*head)->next = prev;
		/*previous elem is now pointing to head*/
		prev = *head;
		/*value of head is now next*/
		*head = next;
	}

	/*head is now pointing towards prev(last elem)*/
	*head = prev;

	return (*head);
}
