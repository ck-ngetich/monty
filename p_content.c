#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * p_str - function that prints the contents of
 * a stack as a string
 * @stack: stack head
 * @line_cnt: line number
 * Return: no return
 */
void p_str(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	stack_t *current = *stack;

	while (current)
	{
		if (current->n <= 0 || current->n > 127)
			break;
		putchar((char) current->n);
		current = current->next;
	}
	putchar('\n');
}
