#include "main.h"

/**
 * _printf - produces output according to a format.
 *
 * @format: a character string.
 *
 * Return:  the number of characters printed.
*/

int _printf(const char *format, ...)
{
	int i = 0;

	va_list list;

	va_start(list, format);

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			i++;
		}
		else if (*format == '%')
		{
			format++;
			if (*format == ' ' || *format == '\0' || *format == 0)
			{
				return (-1);
			}
			else if (*format == 'c')
			{
				i += print_char(list);
			}
			else if (*format == 's')
			{
				i += print_string(list);
			}
			else if (*format == '%')
			{
				_putchar('%');
				i++;
			}
		}
		format++;
	}
	va_end(list);
	return (i);
}
