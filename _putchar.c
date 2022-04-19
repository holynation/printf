#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * create_buffer - prints buffer and free it and free va_lis
 * @buffer: buffer holding print-ables
 * @len: length of print-able string
 * @list: va_list
 */

void create_buffer(char *buffer, int len, va_list list)
{
    char *buff; /* array of characters */

    buff = realloc(buffer, len); /* realloc to correct size */
    write(1, buff, len); /* print to stdout */

    free(buff); va_end(list); /* cleanup memory */
}
