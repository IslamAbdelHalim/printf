#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: a character string.
 * Return:  the number of characters printed.
*/

int _printf(const char *format, ...)
{
	int i = 0;
	va_list list;

	va_start(list, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i] == '%')
		{
			i++;
			if (format[i] != 'c' || format[i] != 's' || format[i] != '%')
				return (-1);
			else if (format[i] == 'c')
				print_char(list);
			else if (format[i] == 's')
				print_string(list);
			else if (format[i] == '%')
				_putchar('%');
		}
		i++;
	}
	i--;
	va_end(list);
	return (i);
}
