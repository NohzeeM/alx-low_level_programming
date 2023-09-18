#include "main.h"

/**
 * _strlen - checkes the lenth of the string
 * @s: string to be checked
 * Return: 0
 */

int _strlen(char *s)
{
int string_length = 0;

while (s[string_length])
	string_length++;
return (string_length);

}
