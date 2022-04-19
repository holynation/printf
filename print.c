#include "main.h"

/**
  * _printf - custom printf version
  * @format: character string with specifiers
  * Return: expanded strings
  */

int _printf(char *format, ...)
{
	unsigned int i;
	char *s;
	va_list valist; /* initializing the args*/

	int counter = 0, j = 0;

	va_start(valist, format);

	while (format[j] != '\0')
	{
		if (format[j] != '%')
		{
			_putchar(format[j++]); /* used index j and increment after usage*/
			counter++;
		}
		else /* % got here and find the equiv util func*/
		{
			j++;
			if (format[j] == '%') /* handle double % symbol */
			{
				_putchar(format[j]);
				counter++;
			}
			if (format[j] == 'c')
			{
				i = va_arg(valist, int);
				_putchar(i);
				counter++;
			}
			if (format[j] == 's')
			{
				s = va_arg(valist, char*);
				_puts(s);
				counter++;
			}
			j++;
		}
	}
	va_end(valist);
	return (counter);
}
