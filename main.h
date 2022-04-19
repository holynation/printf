#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list,va_start,va_end,va_arg*/
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */

/* utility functions */

int _putchar(char c);
void _puts(char *str);

/* printf functions */
int _printf(char *format, ...);

#endif
