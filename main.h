#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int _printChar(va_list values);
int (*get_func(char s))(va_list);
int _printDec(va_list values);
