#include "main.h"

/**
 * get_func - returns needed function
 * @i: identifier for function
 * Return: Pointer to needed function
 */
char* (*get_func(char i))(va_list)
{
	int j = 0;

	print keys[] = {
		{'c', print_c},
		{'s', print_s},
		{'\0', NULL}
	};
	/* iterating to get the equiv func to arg i */
	while (keys[j].ch != '\0')
	{
		if (keys[j].ch == i)
			return (keys[j].func);
		j++;
	}
	return (NULL);
}
