#include "main.h"

/**
 * print_square - print a square using the character #
@@ -10,23 +10,12 @@
*/
void print_square(int size)
{
	int c, r;
	int row, column;

	if (!(size <= 0))
	{
		for (c = 0; c < size; c++)
		{
			r = 0;
			while (r < size)
			{
				_putchar('#');
				r++;
			}
			_putchar('\n');
		}
	}
	else
	for (row = 1; row <= size; ++row)
	{
		for (column = 1; column <= size; ++column)
			_putchar('#');
		_putchar('\n');
	}
}
