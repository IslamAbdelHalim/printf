#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 means sucess
*/

int main(void)
{
        char name[] = "Islam";
	int len6;
        int len1 = _printf("The is my Printf\n");
        int len2 = _printf("This function equivalent to printf without using in stdolib\n");
        int len3 = _printf("My name is: %s,\n And My first char of my name is:%c \n", name, name[0]);
        int len4 = _printf("%s\n", NULL);
        int len5 = _printf("%c\n", NULL);
	_printf(NULL);
	_printf("% ");
	_printf("% ");
	_printf("A %s sentence\n", "simple");
	_printf("A %c%c%s sentence\n", 's', 'i', "mple");
	_printf("A simple %v entence\n");
	_printf("NULL: %c, %s\n", NULL, NULL);
        printf("%d %d %d %d %d\n", len1, len2, len3, len4, len5);
	len6 = _printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", len6);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	_printf("Unknown:[%r]\n");
        return (0);
}
