#include"main.h"

/**
 * print_line - print a straight line
@@ -9,18 +9,14 @@
*/
void print_line(int n)
{
	int i;
	int lnChr;

	for (i = 1; i <= n; i++)
	if (n <= 0)
		_putchar('\n');
	else
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
		for (lnChr = 1; lnChr <= n; ++lnChr)
			_putchar('_');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
