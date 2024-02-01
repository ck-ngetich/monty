#include "monty.h"
/**
* f_exe - executes the opcode
* @stack: head of stack
* @counter: line_counter
* @file: ptr to monty file
* @content: content in a line
* Return: nothing
*/
int f_exe(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"addnode", ad_node}, {"pall", p_stack}, {"pint", f_ptop},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"not", f_not},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", p_char},
				{"pstr", p_string},
				{"rtop", f_rtop},
				{"rbot", f_rbot},
				{"queue", f_queue},
				{"stack", t_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		f_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}