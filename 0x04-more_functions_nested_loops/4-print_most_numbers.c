#include "holberton.h"
#include"main.h"

/**
 * print_most_numbers - print 0 - 9 apart
@@ -9,15 +9,13 @@

void print_most_numbers(void)
{
	int i;
	int num;

	for (i = 0; i <= 9; i++)
	for (num = 0; num <= 9; ++num)
	{
		if (i == 2 || i == 4)
		if (num == 2 || num == 4)
			continue;

		_putchar(i + 48);
		_putchar(num + 48);
	}

	_putchar('\n');
}
