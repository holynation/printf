#include <stdarg.h> /* va_list, va_start_va_end_va_arg*/
#include "variadic_functions.h"

/**
 * sum_them_all - return sum when given unknown args
 * @n: integers to add
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n,const unsigned int o, ...)
{
	va_list valist; /*macro pointer variable*/
	unsigned int sum = 0, i;

	/* validate valist and initialize */
	if (n == 0)
		return (0);
	
	/* it accept two args,first is the macro variable, second is the last arg of the func*/
	va_start(valist, o);

	/* iterate through list, update sum, free list */
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int); /* access each arg*/
	va_end(valist);/* cleanup the memory*/

	return (sum);
}
