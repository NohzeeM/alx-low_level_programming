#include "main.h"
/**
 * _strcmp - The main function
 * @s1: function parameter 1
 * @s2: function parameter 2
 * Return: s1 or s2
 */
int _strcmp(char *s1, char *s2)
{
int a;

a = 0;
while (s1[a] != '\0' && s2[a] != '\0')
{
if (s1[a] != s2[a])
{
	return (s1[a] - s2[a]);
}
a++;
}
return (0);
}
