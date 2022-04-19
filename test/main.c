#include <stdio.h>
#include "main.h"

/**
  * _hr - print an horizontal line as demacator
  * return 0 
  */

void _hr(void)
{
	_printf("_____________________________________________\n");
}

/**
  * main - Entry point
  *
  * Return: Always 0
  */

int main(void)
{
	int len, len2;

	len2 = _printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Character: [%c]\n", 'H');
	_hr();
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_hr();
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Len:[%d, %i]\n", len, len2);
	return (0);
}
