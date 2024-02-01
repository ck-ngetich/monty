#include "monty.h"
/**
 * f_ptop - function that prints the top
 * @head: head of stack
 * @counter: line_counter
 * Return: nothng
*/
void f_ptop(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
