#include "lists.h"
/**
 * list_len - gets the no of nodes
 * @h: pointer to the head of the first node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 1;
	/*if head is null return 0 nodes*/
	if (h == NULL)
		return (0);
	/*iterate through the nodes*/
	while (h->next != NULL)
	{
		/*proceed to next node*/
		h = h->next;
		/*counting the node*/
		node_count++;
	}
	return (node_count);
}
