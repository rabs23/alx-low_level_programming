#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the first node
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
		;
	{
		h = h->next;
	}
	return (counter);
}
