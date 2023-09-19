#include "main.h"

/**
 * print_string - function That print string
 *
 * @arg: The argument
 *
 * Return: The number of string
*/

int print_string(va_list arg)
{
	char *argument;
	int i = 0;

	argument = va_arg(arg, char*);

	if (argument == NULL)
	{
		argument = "(null)";
	}

	while (*argument != '\0')
	{
		_putchar(*argument);
		argument++;
		i++;
	}
	return (i);
}

/**
 * print_char - function to print char
 *
 * @arg: The argument
 *
 * Return: 1 The number of character
*/

int print_char(va_list arg)
{
	char  ch;

	ch = va_arg(arg, int);

	_putchar(ch);
	return (1);
}

