#include "main.h"

/**
 * print_string - function That print string
 * @arg: The argument
 * Return: Always 0
*/

void print_string(va_list arg)
{
	char *argument;

	argument = va_arg(arg, char*);

	while (*argument != '\0')
	{
		_putchar(*argument);
		argument++;
	}
}

/**
 * print_char - function to print char
 * @arg: The argument
 * Return: Always 0
*/

void print_char(va_list arg)
{
	char ch;

	ch = va_arg(arg, char);
	_putchar(ch);
}
