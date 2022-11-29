#include "lists.h"

int check(listint_t *ptr, int n, listint_t *now);
/**
 * check_cycle - checks if linked list is a cycle
 * @list: the linked list
 * Return: 0 if there's no cycle, 1 if there's a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *ptr;
	int f = 0;
	listint_t *current;

	current = list;
	ptr = list;

	while (current != NULL)
	{
		if (check(ptr, f, current) == 1)
		{
			return (1);
		}
		f++;
		current = current->next;
	}

	return (0);
}

/**
 * check - checks to see if linked list can ber reached again
 * @ptr: head
 * @n: position
 * @now: current list
 * Return: 1 if it does, 0 if it doesn't
 */
int check(listint_t *ptr, int n, listint_t *now)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (ptr == now)
		{
			return (1);
		}
		ptr = ptr->next;
	}

	return (0);
}
