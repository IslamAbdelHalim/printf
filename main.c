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

	_printf("The is my Printf\n");
	_printf("This function equivalent to printf without using in stdolib\n");
	_printf("My name is: %s,\n And My first char of my name is:%c \n", name, name[0]);
	_printf("%s\n", NULL);
	_printf("%c\n", NULL);
	_printf("NULL: %c, %s\n", NULL, NULL);

	return (0);
}
