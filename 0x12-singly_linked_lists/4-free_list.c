#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free single list link
 * @head: pointer to the first node
 * Return: norhing
 */

void free_list(list_t *head)
{
	list_t *current;

	/**
	 * while current head is not null set headas next node
	 * and free the current node str then
	 * free current node
	 */
	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
