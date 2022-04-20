#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list,va_start,va_end,va_arg*/
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */
/* for testing purpose,removed when done */
#include <stdio.h>

/* utility functions */
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void _putchar(char *c, int len);
void _puts(char *str);
char *create_a_buffer(void);
int scan_buffer_overflow(char *buffer, int len);
void print_buffer(char *buffer, int len, va_list list);
char* (*get_func(char i))(va_list);
void process_func(char *f, char *buffer, int *len, int *counter);

/* printf functions */
int _printf(char *format, ...);
char *print_c(va_list list);
char *print_s(va_list list);

/**
 * struct types - defining struct fields
 * @ch: identifier of type to print (e.g. c means char)
 * @func: ptr to functions that print according to identifier (e.g. print_c)
 */

typedef struct types
{
	char ch;
	char* (*func)(va_list);
} print;

#endif
