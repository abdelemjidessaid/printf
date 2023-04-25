#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_character - function that handle printing a character
 * for a formating string.
 * @list: array of char pointer contains arguments.
 * Return: number of bytes that is printed.
 */
int print_character(va_list list)
{
	int printed = 0;
	char c = va_arg(list, int);
	char *p = &c;

	if (p != NULL)
		printed = write(1, p, 1);
	else
		printed = 0;

	return (printed);
}


/**
 * print_string - function that handle to print formated string.
 * @list: array of char pointers contains arguments.
 * Return: number of bytes that is printed.
 */
int print_string(va_list list)
{
	int printed = 0, len;
	char *string = va_arg(list, char *);

	if (string != NULL)
	{
		len = strlen(string);
		printed += write(1, &string[0], len);
	}

	return (printed);
}
