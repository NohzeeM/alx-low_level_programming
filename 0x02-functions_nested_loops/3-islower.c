#include "main.h"
/**
 * _islower - check for lower case character
 * @c: checked character
 * Return: 1 for lower case character and 0 for the rest
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
