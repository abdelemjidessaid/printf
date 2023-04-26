#include "main.h"


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

	if (c != '\0')
		printed = write(1, &c, 1);
	else
		printed = 0;

	return (printed);
}


/**
 * print_string - function that handle to print string in a formated string.
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

/**
 * print_dicimal - function that handle to print dicimal in formated string.
 * @list: array of char pointers contains arguments.
 * Return: number of bytes that is printed.
 */
int print_dicimal(va_list list)
{
	int printed = 0, len;
	double num = va_arg(list, double);
	char *str_num = dtos(num, 0);

	if (str_num != NULL)
	{
		if (num < 0)
			str_num = to_neg(str_num);
		len = strlen(str_num);
		printed = write(1, str_num, len);
	}

	return (printed);
}

/**
 * print_integer - function that handle to print integer in formated string.
 * @list: array of char pointers contains arguments.
 * Return: number of bytes that is printed.
 */
int print_integer(va_list list)
{
	int printed = 0, len;
	int num = va_arg(list, int);
	char *str_num = itostr(num);

	if (str_num != NULL)
	{
		if (num < 0)
			str_num = to_neg(str_num);
		len = strlen(str_num);
		printed = write(1, str_num, len);
	}

	return (printed);
}

/**
 * print_switcher - function that handle the data type to print it.
 * @c: the character that specifies the type of data.
 * @list: array of char pointer that contains the arguments.
 * Return: the number of bytes that is printed.
 */
int print_switcher(char c, va_list list)
{
	int printed = 0;

	switch (c)
	{
		case '%':
			write(1, "%", 1);
			printed += 1;
			break;
		case 'c':
			printed += print_character(list);
			break;
		case 's':
			printed += print_string(list);
			break;
		case 'd':
			printed += print_integer(list);
			break;
		case 'i':
			printed += print_integer(list);
			break;
		default:
			write(1, "%", 1);
			write(1, &c, 1);
			printed += 2;
	}
	return (printed);
}
