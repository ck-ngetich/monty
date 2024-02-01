#include "monty.h"
/**
  *f_rbot- rotates the stack to the bottom
  *@head: head of stack
  *@counter: line_counter
  *Return: nothing
 */
void f_rbot(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *file;

	file = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (file->next)
	{
		file = file->next;
	}
	file->next = *head;
	file->prev->next = NULL;
	file->prev = NULL;
	(*head)->prev = file;
	(*head) = file;
}
