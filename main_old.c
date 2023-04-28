#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, p1, p2;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    p1 = _printf("hello %i\n", INT_MIN);
    p2 = printf("hello %i\n", INT_MIN);
    printf("**** _print %d, print %d\n", p1, p2);

    p1 = _printf("Length:[%d, %i]\n", len, len);
    p2 = printf("Length:[%d, %i]\n", len2, len2);
    printf("**** _print %d, print %d\n", p1, p2);
    p1 = _printf("Negative:[%d]\n", -762534);
    p2 = printf("Negative:[%d]\n", -762534);
    printf("**** _print %d, print %d\n", p1, p2);
    p1 = _printf("Unsigned:[%u]\n", ui);
    p2 = printf("Unsigned:[%u]\n", ui);
    printf("**** _print %d, print %d\n", p1, p2);
    p1 = _printf("Unsigned octal:[%o]\n", ui);
    p2 = printf("Unsigned octal:[%o]\n", ui);
    printf("**** _print %d, print %d\n", p1, p2);
    p1 = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    p2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("**** _print %d, print %d\n", p1, p2);
    p1 = _printf("Character:[%c]\n", 'H');
    p2 = printf("Character:[%c]\n", 'H');
    printf("**** _print %d, print %d\n", p1, p2);
    p1 = _printf("String:[%s]\n", "I am a string !");
    p2 = printf("String:[%s]\n", "I am a string !");
    printf("**** _print %d, print %d\n", p1, p2);
    p1 = _printf("Address:[%p]\n", addr);
    p2 = printf("Address:[%p]\n", addr);
    printf("**** _print %d, print %d\n", p1, p2);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    p1 = _printf("Len:[%d]\n", len);
    p2 = printf("Len:[%d]\n", len2);
    printf("**** _print %d, print %d\n", p1, p2);
    p1 = _printf("Unknown:[%r]\n");
    p2 = printf("Unknown:[%r]\n");
    printf("**** _print %d, print %d\n", p1, p2);
    return (0);
}