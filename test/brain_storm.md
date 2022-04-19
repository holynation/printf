int _printf(const char *format, ...){

char *traverse;
unsigned int i;
char *s;
int counter = 0;

/* stating the base case*/
if (traverse == '\0'){
	_putchar('\n');
	return;
}

while (*traverse != '%'){
	_putchar(*traverse); /* length  */ /* 0123456*/
	counter += 1;
	traverse++
}

/* %78 */
/* % */
/* printf("length %c and %s", 63, "iyanuoluwa") */
counter += 1; /* counter = 8, while % = 7 */
*traverse++; /* gets the immediate character after the % */
counter += 1; /* c|s|i|d = 8,  while counter = 9 */

if (*traverse == 'c'){
	i = va_arg(valist, int); /* 63 */
	_putchar(i);
}

if (traverse == 's'){
	i = va_arg(valist, char *) /* iyanuoluwa */
	_printf(i); /* recursive function with it base case */
	/* using another method to print */
	_puts(i);
}

if (traverse == 'i'){
	i = va_arg(valist, int);
	_print_digit(i);
}

va_end(valist);

return counter;


}/* end of our function*/


int _puts(const char* str){
	int i;

	while ( str != '\0' && i = 0){
		_putchar(str[i]); /* str[0], str[1] */
		i++;
	}
	_putchar('\n');
}

void _print_digit(int n){
	if (n < 0){
		_putchar('-');
		n = -n;
	}

	if (n/10){
		_putchar(n/10);
	}
	_putchar(n%10 + '0');
}

int last_digit(int* n){
	/* n = 123 */

	/* n / 10 = 12.3 */
	if(n % 10 != 0){
		_putchar(n + '0') /* the last digit would be here*/
	}
}



type of datatype => char, int, float,double

char x = "c" => equivalent decimal number called ASCII VALUE

char* x = "iyanuoluwa" => array of characters
char str[] = "iyanuoluwa" => length of strings 10
