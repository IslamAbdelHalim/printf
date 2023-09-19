#include "main.h"
/**
 * print_integer - Prints an integer
 * @arg: The argument
 *
 * Return: The number of characters printed.
 */
int print_integer(va_list arg)
{
	int num, digits = 0, temp, divisor, i, digit;

       	num = va_arg(arg, int);

	if (num < 0)
	{
		_putchar('-');
		digits++;
		num = -num;
	}

	temp = num;
	do {
		temp /= 10;
		digits++;
	} while (temp != 0);

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
	return (digits);
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
