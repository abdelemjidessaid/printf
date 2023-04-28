#include "main.h"

/**
 * print_binary - function that prints binary code.
 * @list: array of arguments
 * Return: number of bytes that is printed.
 */
int print_binary(va_list list)
{
	unsigned int num = va_arg(list, unsigned int), printed = 0, len;
	char *binary = calloc((size_t) BUF_SIZE, sizeof(char));

	binary = num_to_bin(num);
	if (!binary)
		return (0);
	len = strlen(binary);
	printed = write(1, &binary[0], len);

	return (printed);
}

/**
 * print_unsigned - function that prints unsigned number.
 * @list: array of arguments.
 * Return: number of bytes printed.
 */
int print_unsigned(va_list list)
{
	int printed = 0, len;
	unsigned int num = va_arg(list, unsigned int);
	char *buf;

	buf = calloc(BUF_SIZE, sizeof(char));
	if (!buf)
		return ("0");
	buf = itostr((long int) num);
	if (!buf)
		return ("0");
	len = strlen(buf);
	printed = write(1, buf, len);

	return (printed);
}
