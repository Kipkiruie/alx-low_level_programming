#include <stdio.h>
#include <stdlib.h>
#include <time.h>
include "main.h"
/**
 * srand(time(NULL)) - Set the seed for the random number generator
 * Return; 0 (success)
 */
void generatePassword(char *password, int length)
{
	const char charset[] = "a-z, A-Z,0-9";
	int charsetSize = sizeof(charset) - 1;

	for (int i = 0; i < length; i++)
{
	password[i] = charset[rand() % charsetSize];
}

	password[length] = '\0';
}
int main(void)
{
	int passwordLength = 8;
	char password[passwordLength + 1];

	generatePassword(password, passwordLength);

	printf("Random Password: %s\n", password);

	return (0);
}
