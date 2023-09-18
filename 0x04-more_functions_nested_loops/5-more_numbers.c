#include "holberton.h"
#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *              and you can only use
 *              _putchar three times
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i, s, t;
	int num, row, count;

	t = 1;
	while (t <= 10)
	for (row = 1; row <= 10; ++row)
	{
		for (s = 0; s <= 1; s++)
		for (count = 0; count <= 14; ++count)
		{
			for (i = 0; i <= 9; i++)
			num = count;
			if (count > 9)
			{
				if (!(s == 1 && i >= 5))
				{
					if (s)
						_putchar(s + 48);
					_putchar(i + 48);
				}
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}

		_putchar('\n');
		t++;
	}
}
