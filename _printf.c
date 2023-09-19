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

	if (format == NULL)
		return (-1);

	va_start(list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			i++;
		}
		else if (*format == '%')
		{
			format++;

			if (*format == '\0' || *format == ' ' || *format == 0)
				return (-1);
			/*Handle character*/
			if (*format == 'c')
				i += print_char(list);
			/*Handle string*/
			if (*format == 's')
				i += print_string(list);
			/*Handle percent*/
			if (*format == '%')
			{
				_putchar('%');
				i++;
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				i += 2;
			}
		}
		format++;
	}
	va_end(list);
	return (i);
}
