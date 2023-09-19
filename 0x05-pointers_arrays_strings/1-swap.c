#include "main.h"
/**
 * swap_int - take two variables intergers and swap them
 * @a:swaps and store the address of b
 * @b:swaps and store the adress of a
 * Return: 0
 */

void swap_int(int *a, int *b);
{
	int change;
	change = *b;
	*b = *a;
	*a = change;
}
