#include <stdio.h>
/**
* puts2 - prints every string
* @str: input parameter
* Return: always 1
*/
void puts2(char *str)
 * _strspn - counts number of bytes in s
 * @s: bytes to be cheked
 * @accept: where to start counting
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int num = 0;
	int is_checked;
	char *main_accept = accept;

	for (i = 0; str[i] != '\0'; i++)
	while (*s != '\0')
	{
		is_checked = 0;

		if (i % 2 == 0)
		putchar(str[i]);
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				is_checked = 1;
				break;
			}
			accept++;
		}
		if (is_checked == 0)
		{
			break;
		}
		num++;
		accept = main_accept;
		s++;
	}
	putchar ('\n');
	return (num);
}
