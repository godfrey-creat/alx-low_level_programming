#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - func that prints all elements in linked list
 * @h: pointer to first node
 * Return: no of modes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;
	/*return 0 if h is null*/
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		/*proceed to next node*/
		h = h->next;
		/*count number of nodes*/
		node_count++;
	}
	/*print the last node now*/
	printf("%d\n", h->n);
	return (node_count);
}
