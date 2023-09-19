/**
 * print_integer - Prints an integer
 * @arg: The argument
 *
 * Return: The number of characters printed.
 */
int print_integer(va_list arg)
{
	int num = va_arg(arg, int);
	int digits = 0;

	if (num < 0)
	{
		_putchar('-');
		digits++;
		num = -num;
	}

	int temp = num;
	do {
		temp /= 10;
	digits++;
	} while (temp != 0);

	while (digits > 0)
	{
		int divisor = 1;
		for (int i = 1; i < digits; i++)
			divisor *= 10;
		int digit = num / divisor;
		_putchar('0' + digit);
		num %= divisor;
		digits--;
	}

	return (digit)s;
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
