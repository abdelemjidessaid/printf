#include "main.h"

/**
 * print_binary - function that prints binary code.
 * @list: array of arguments
 * Return: number of bytes that is printed.
 */
int print_binary(va_list list)
{
	int num = va_arg(list, int), printed = 0, len;
	char *binary = calloc((size_t) BUF_SIZE, sizeof(char));

	num = ABS(num);
	binary = num_to_bin(num);
	if (!binary)
		return (0);
	len = strlen(binary);
	printed = write(1, &binary[0], len);

	return (printed);
}
