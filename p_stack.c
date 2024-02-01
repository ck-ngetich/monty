#include "monty.h"
/**
 * p_stack - prints the stack
 * @head: head of stack
 * @counter: irrelevant
 * Return: nothing
*/
void p_stack(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
