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
<<<<<<< HEAD
	char *argument;
	int i = 0;
=======
    char* argument;
>>>>>>> refs/remotes/origin/main

    argument = va_arg(arg, char*);

<<<<<<< HEAD
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
=======
    while (*argument != '\0')
    {
        _putchar(*argument);
        argument++;
    }
>>>>>>> refs/remotes/origin/main
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
<<<<<<< HEAD
	char  ch;

	ch = va_arg(arg, int);

	_putchar(ch);
	return (1);
=======
    int ch;

    ch = va_arg(arg, int);
    _putchar(ch);
}

/**
 * print_integer - function to print char.
 * @arg: The argument
*/
void print_integer(int n)
{
    if (n != 0) 
    {
        print_integer(n / 10);
        _putchar((n % 10) + '0');
    }
>>>>>>> refs/remotes/origin/main
}
