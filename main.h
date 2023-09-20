#ifndef MAIN_H
#define MAIN_H

#define INT_MAX 2147483647
#define INT_MIN -2147483648

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int print_string(va_list arg);
int print_char(va_list arg);
int _printf(const char *format, ...);
int print_integer(va_list arg);
int print_decimal(va_list arg);

#endif
