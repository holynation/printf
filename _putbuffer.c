#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @len: The character length
 */

void _putchar(char *c, int len)
{
	write(1, c, len);
}

/**
 * scan_buffer_overflow - check if buffer not overflow, else write to stdout
 * print everything,then revert length to 0 to write at buffer start
 * @buffer: buffer holding string to print
 * @len: position in buffer
 *
 * Return: length position
 */

int scan_buffer_overflow(char *buffer, int len)
{
	if (len > 1020)
	{
		_putchar(buffer, len);
		len = 0; /* reset length */
	}
	return (len);
}

/**
 * create_a_buffer - create a tmp buffer to hold string
 * till it's ready for write operation
 * Return: pointer to buffer created
 */
char *create_a_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL) /* validate malloc */
		return (NULL);
	return (buffer);
}

/**
 * print_buffer - prints buffer and free it and free va_lis
 * @buffer: buffer holding print-ables
 * @len: length of print-able string
 * @list: va_list
 */

void print_buffer(char *buffer, int len, va_list list)
{
	char *buff; /* array of characters */

	buff = realloc(buffer, len); /* realloc to correct size */
	_putchar(buffer, len);

	/* cleanup memory */
	free(buff);
	va_end(list);
}
