#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: pointer to current head node.
 * @index: The node to locate.
 *
 * Return: adress of node at index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
