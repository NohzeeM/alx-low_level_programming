#include "main.h"
/**
 * _strncpy - function to concatenate a string
 * @src: string parameter
 * @dest: string parameter
 * @n: numbers to be concatenated
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;

while (a < n && src[a] != '\0')
{
	dest[a] = src[a];
	a++;
}
while (a < n)
{
	dest[a] = '\0';
	a++;
}
return (dest);
}
