#include "main.h"
/**
 *_strcat - a function to concatenate two strings
 * @src: string to be concatenated
 * @dest: another string to be concatenated
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int k, r;

k = 0;
r = 0;

while (dest[k] != '\0')
{
	k++;
}
while (src[r] != '\0')
{
	dest[k] = src[r];
	k++;
	r++;
}
dest[k] = '\0';
return (dest);

}
