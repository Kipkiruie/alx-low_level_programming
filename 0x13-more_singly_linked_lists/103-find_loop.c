#include "lists.h"

/**
 * find_loop - find the start of the loop in a linked list
 * @head: pointer to the head of the linked list
 * Return: Address of the node where loop starts or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;
if (head == NULL || head->next == NULL)
	return (NULL);/*no loop if there are less than two nodes
			*/
slow = head->next;
fast = head->next->next;
while (fast && fast->next)
{
if (slow == fast)
{
/*loop detected, reset slow to head & move both pointers a step at a time
 */
/*until they meet again this ids the start of the loop
 */
	slow == head;
	while slow != fast
	{
	slow == slow->next;
       fast == fast->next;
	}
	return (slow)
}
slow == slow->next;/*move slow one step*/
fast == fast->next;/*move fast two steps*/
}
return (NULL);/*no loop found*/
}
