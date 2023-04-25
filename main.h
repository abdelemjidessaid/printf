#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**** FUNCTIONS ****/
int _putchar(char c);
int _printf(const char *format, ...);
int print_character(va_list list);
int print_string(va_list list);

#endif /* _MAIN_H_ */
