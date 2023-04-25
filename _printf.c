#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printf - the similar to the printf function of C.
 * @format: string contains all the specifics of data types.
 * Return: the number of bytes that is printed, -1 otherwise.
 */
int _printf(const char *format, ...)
{
	int printed = 0, i, len;
	va_list list;

	if (format == NULL)
		return (-1);

	len = strlen(format);
	va_start(list, format);
	for (i = 0; i < len; i++)
	{
		if (format[i] != '%')
		{
			printed++;
			write(1, &format[i], 1);
		}
		else
		{
			if (i + 1 < len)
			{
				printed += print_switcher(format[i + 1], list);
				i += 1;
			}
		}
	}
	va_end(list);

	return (printed);
}

