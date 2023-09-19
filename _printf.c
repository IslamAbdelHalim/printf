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
			_putchar(*format);
			i++;
		}
		else if (*format == '%')
		{
			format++;
			if (*format == ' ' || *format == '\0')
				break;
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
		}
		format++;
	}
	va_end(list);
	return (i);
}
