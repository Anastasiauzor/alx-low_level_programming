#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a list in the file
 *
 * @head: first node in the linked list in the file
 *
 * Return: resulting sum of the node
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
