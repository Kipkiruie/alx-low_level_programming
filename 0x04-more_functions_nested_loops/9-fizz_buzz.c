#include <stdio.h>
#include"main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
@@ -12,35 +12,24 @@

int main(void)
{
	int i;
	int num;

	for (i = 1; i <= 100; i++)
	for (num = 1; num <= 100; ++num)
	{
		if ((i % 3 == 0) && !(i % 5 == 0))
		{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		}
		else if ((i % 5 == 0) && !(i % 3 == 0))
		{
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
			printf("%d", num);

		if (i != 100)
		{
		if (num != 100)
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}
