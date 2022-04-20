#include "main.h"

/**
  * _puts - Print null terminated string,it args, to stdout
  * @str: the string to be written
  *
  */

void _puts(char *str)
{
	while (*str != '\0')/* since *str will refer to the base array i.e str[0]*/
	{
		_putchar(*str++);
	}
}
