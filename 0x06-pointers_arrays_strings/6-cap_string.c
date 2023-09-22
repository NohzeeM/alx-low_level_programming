#include "main.h"
/**
 * cap-string - main fuction
 * @str: string parameter
 * Return: void
 */
char *cap_string(char *str)
{
int count = 0;
while (str[count])
{
while (!(str[count] >= 'a' && str[count] <= 'z'))
	count++;
if (str[count - 1] == '' ||
}
}
