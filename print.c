#include "main.h"

/**
  * _printf - custom printf version
  * @format: character string with specifiers
  * Return: expanded strings
  */

int _printf(char *format, ...)
{
	char *s, *buffer;
	va_list valist; /* initializing the args*/

	int counter = 0, i = 0, j = 0, len = 0;

	if (format == NULL)
		return (-1);

	buffer = create_a_buffer(); /* a tmp memory location using malloc */
	if (buffer == NULL)
		return (-1);

	va_start(valist, format);

	while (format[j] != '\0')
	{
		if (format[j] != '%')
		{
			len = scan_buffer_overflow(buffer, len);
			buffer[len++] = format[j++]; /*index j&len and j++&len++*/
			counter++;
		}
		else /* % encounterd here and find the equiv util func*/
		{
			j++;
			if (format[j] == '\0') /* handle single ending % */
			{
				va_end(valist);
				free(buffer);
				return (-1);
			}
			if (format[j] == '%') /* handle double % symbol */
			{
				len = scan_buffer_overflow(buffer, len);
				buffer[len++] = format[j];
				counter++;
			}
			else
			{
				if (format[j] == 'c')
				{
					s = print_c(valist);
					len = scan_buffer_overflow(buffer, len);
					buffer[len++] = *s; /* assign pointer value to buffer */
					counter++;
				}
				i = 0;
				if (format[j] == 's')
				{
					s = print_s(valist);
					while (s[i] != '\0') /* iterating the string *s */
					{
						len = scan_buffer_overflow(buffer, len);
						buffer[len++] = s[i++]; /* s[i]&i++ */
						counter++;
					}
				}
				free(s);
			}
			j++;
		}
	}
	print_buffer(buffer, len, valist);
	return (counter);
}
