#include "lists.h"

/**
 * check_cycle - checking wheather the cycle contains the linked list.
 * @list: linked list to check
 *
 * Return: 1 (cycle), 0 (otherwise)
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
