#ifndef _MAIN_H_
#define _MAIN_H_

/*** HEADERS ****/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**** FUNCTIONS ****/
int _putchar(char c);
int _printf(const char *format, ...);
int print_switcher(char c, va_list list);
int print_character(va_list list);
int print_string(va_list list);
void strrev(char *str);
char *itostr(long int num);
char *to_neg(char *str);
char *dtos(double num, int precision);
char *num_to_bin(unsigned int num);
int print_binary(va_list list);

/**** MACROS ****/
#define ABS(n) (n < 0 ? (-(n)) : (n))
#define BUF_SIZE 1024

#endif /* _MAIN_H_ */
