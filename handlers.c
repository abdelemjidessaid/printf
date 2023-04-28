#include "main.h"

/**
 * num_to_octal - function that converts number to octal.
 * @num: unsigned number.
 * Return: char string contains the number in octal.
 */
char *num_to_octal(unsigned int num)
{
	int i = 0;
	char *buf;

	buf = calloc(BUF_SIZE, sizeof(char));
	if (!buf || num == 0)
		return ("0");
	while (num > 0)
	{
		buf[i++] = (num % 8) + '0';
		num /= 8;
	}
	buf[i] = '\0';
	strrev(buf);
	return (buf);
}
