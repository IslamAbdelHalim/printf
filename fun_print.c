#include "main.h"

/**
 * print_string - function That print string
 *
 * @arg: The argument
*/

void print_string(va_list arg)
{
	char *argument;

	argument = va_arg(arg, char *);

	while (*argument != '\0')
	{
		_putchar(*argument);
		argument++;
	}
}

/**
 * print_char - function to print char
 *
 * @arg: The argument
*/

void print_char(va_list arg)
{
	int ch;
	
	ch = va_arg(arg, int);
	_putchar(ch);
}
