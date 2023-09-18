#include "holberton.h"
#include"main.h"

/**
 * print_diagonal - print a diagonal line
@@ -9,21 +9,17 @@

void print_diagonal(int n)
{
	int i, s;
	int postn, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		for (postn = 1; postn <= n; ++postn)
		{
			for (s = 0; s < i; s++)
			{
			for (space = 1; space <= postn; ++space)
				_putchar(' ');
			}
			_putchar(92);
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
