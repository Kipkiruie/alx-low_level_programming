#include "holberton.h"
#include"main.h"

/**
 * print_numbers - print 0 - 9
@@ -9,10 +9,11 @@

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + 48);
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
