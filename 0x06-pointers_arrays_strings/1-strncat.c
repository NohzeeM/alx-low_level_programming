#include "main.h"

/**
 * _strncat - function that concatenate a string
 * @n: number of bytes to be concatenated
 * @src: string to be concatenated
 * @dest: string to be concatenated
 * Return: 0 or 1
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b;

a = 0;
b = 0;
while (dest[a] != '\0')
{
	a++;
}
while (b < n && src[b] != '\0')
{
	dest[a] = src[b];
	a++;
	b++;
}
dest[a] = '\0';
return (dest);
}
