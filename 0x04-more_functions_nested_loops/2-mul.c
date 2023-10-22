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
  12 changes: 5 additions & 7 deletions12  
0x04-more_functions_nested_loops/4-print_most_numbers.c
@@ -1,4 +1,4 @@
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
