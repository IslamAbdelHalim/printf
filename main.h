#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
void print_string(va_list arg);
void print_char(va_list arg);
int _printf(const char *format, ...);
void print_integer(int n);

#endif
