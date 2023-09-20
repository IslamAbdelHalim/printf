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

/**
 * print_integer - Prints an integer
 * @arg: The argument
 *
 * Return: The number of characters printed.
 */

int print_integer(va_list arg)
{
	int num, digits = 0, temp, divisor, i, digit, count = 0;

	num = va_arg(arg, int);

	if (num == '\0')
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		num *= -1;
		count++;
	}

	temp = num;

	while (temp != 0)
	{
		temp /= 10;
		digits++;
	}

	count += digits;
	while (digits > 0)
	{
		divisor = 1;
		for (i = 1; i < digits; i++)
			divisor *= 10;
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		digits--;
	}
	return (count);
}

/**
 * print_decimal - function to handl %d
 *
 * @arg: The argument
 *
 * Return: The count of number
*/

int print_decimal(va_list arg)
{
	return (print_integer(arg));
}
