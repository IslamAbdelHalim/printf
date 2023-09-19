#include "main.h"
/**
 * print_integer - Prints an integer
 * @arg: The argument
 *
 * Return: The number of characters printed.
 */
int print_integer(va_list arg)
{
	int num, digits = 0, temp, divisor, i, digit, count;

	num = va_arg(arg, int);
	if (num < 0)
	{
		_putchar('-');
		digits++;
		num *= -1;
	}

	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		digits++;
	}
	count = digits;
	while (digits > 0)
	{
		divisor = 1;
		for (i = 1; i < digits; i++)
		{
			divisor *= 10;
		}
		digit = num / divisor;
		_putchar('0' + digit);
		num %= divisor;
		digits--;
	}
	return (count);
}

/**
 * print_decimal - Prints a decimal number
 * @arg: The argument
 *
 * Return: The number of characters printed.
 */
int print_decimal(va_list arg)
{
	return (print_integer(arg));
}
