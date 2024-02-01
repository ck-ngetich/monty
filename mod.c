#include "monty.h"
/**
 * f_mod - computes the remainder of  division of the second top element of stack
 * @head: head of stack
 * @counter: line_counter
 * Return: nothing
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *i;
	int leng = 0, aux;

	i = *head;
	while (i)
	{
		i = i->next;
		leng++;
	}
	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	if (i->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = i->next->n % i->n;
	i->next->n = aux;
	*head = i->next;
	free(i);
}
