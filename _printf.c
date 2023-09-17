#include "main.h"
#include <stdarg.h>

/*
 * @_printf -  produces output according to a format.
 * @format: a character string.
 * Return:  the number of characters printed.
*/

int _printf(const char *format, ...)
{
	int i = 0, j;
	char c;
	char *s;

	va_list list;
	va_start(list, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch(format[i])
				case 'c':
					c = va_arg(list, char);
					_putchar(c);
					break;
				case 's':
					s = va_arg(list, char*);
					j = 0;
					while (s[j])
					{
						_putchar(s[j]);
						j++;
					}
					break;
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	i--;
	va_end(list);
	return (i);
}
