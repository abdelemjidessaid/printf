#include "main.h"

/**
 * num_to_bin - function that converts integer to binary code.
 * @num: integer number.
 * Return: char string contains the binary code.
 */
char *num_to_bin(unsigned int num)
{
	char *binary;
	int i = 0;

	binary = calloc(BUF_SIZE, sizeof(char));
	if (!binary || num == 0)
		return ("0");
	while (num > 0)
	{
		binary[i++] = (num % 2) + '0';
		num /= 2;
	}
	binary[i] = '\0';
	strrev(binary);

	return (binary);
}

/**
 * itostr - function that converts from long long int to string.
 * @num: the number that should convert.
 * Return: char pointer contains the given number.
 */
char *itostr(long int num)
{
	long int temp = num, digits = 0, i;
	char *str;

	if (num == 0)
		return ("0");
	while (temp != 0)
	{
		digits++;
		temp /= 10;
	}

	str = malloc(digits + 1);
	if (str == NULL)
		return (NULL);

	if (num < 0)
		num = ABS(num);
	i = digits - 1;
	while (num != 0)
	{
		str[i--] = '0' + num % 10;
		num /= 10;
	}
	str[digits] = '\0';

	return (str);
}

/**
 * to_neg - function that add a at start of a string contains a number.
 * @str: string contains a number.
 * Return: string after manipulating.
 */
char *to_neg(char *str)
{
	int i, len;
	char *neg;

	if (str != NULL)
	{
		len = strlen(str);
		neg = malloc(len + 2);
		if (neg == NULL)
			return (str);
		neg[0] = '-';
		for (i = 0; i < len + 1; i++)
			neg[i + 1] = str[i];
		neg[i + 1] = '\0';
	}
	else
		return (NULL);
	return (neg);
}

/**
 * strrev - function that reverses the strings.
 * @str: char array.
 * Return: void.
 */
void strrev(char *str)
{
	int i, j, len, tmp;

	if (str != NULL)
	{
		len = strlen(str);
		for (i = 0, j = len - 1; i < j; i++, j--)
		{
			tmp = str[i];
			str[i] = str[j];
			str[j] = tmp;
		}
	}
}

/**
 * dtos - function converts from double to string.
 * @num: given double number.
 * @precision: numbers after comma.
 * Return: string contains the given number.
 */
char *dtos(double num, int precision)
{
	int sign = (num < 0), int_part, i = 0, j, digit;
	double frac_part;
	char *str = calloc(BUF_SIZE, sizeof(char));

	if (sign)
		num = -num;
	int_part = (int)num;
	frac_part = num - int_part;
	if (sign)
		str[i++] = '-';
	if (int_part == 0)
		str[i++] = '0';
	else
	{
		while (int_part > 0)
		{
			str[i++] = int_part % 10 + '0';
			int_part /= 10;
		}
	}
	strrev(str);
	if (precision > 0)
	{
		str[i++] = '.';
		for (j = 0; j < precision; j++)
		{
			frac_part *= 10;
			digit = (int)frac_part;
			str[i++] = digit + '0';
			frac_part -= digit;
		}
	}
	str[i] = '\0';
	return (str);
}

