#include "monty.h"
/**
 * p_string - prints the string from top of the stack
 * @head: head of stack
 * @counter: counter
 * Return: nothing
*/
void p_string(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
