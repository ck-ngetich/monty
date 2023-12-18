#include <ctype.h>
#include "monty.h"

/**
 * is_digit - function that checks if a string is a digit
 * @string: string to check
 * Return: 1 if success,else 0
 */
int is_digit(char *string)
{
	if (!string || *string == '\0')
		return (0);
	if (*string == '-')
		string++;
	while (*string)
	{
		if (isdigit(*string) == 0)
			return (0);
		string++;
	}
	return (1);
}
/**
 * is_number - function that checks if a string is a number
 * @str: provided string
 * Return: 1 if the string is a number,otherwise 0.
 */
int is_number(char *str)
{
	int i;

	if (!str)
		return (0);

	for (i = 0; str[i]; i++)
		if (i < '0' || i > '9')
			return (0);

	return (1);
}
