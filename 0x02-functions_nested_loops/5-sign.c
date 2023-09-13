#include "main.h"
/**
 * print_sign - prints a sign of a number
 * @n: number that is being checked
 * Return: 1 for positive numb and -1 for anything else
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
}
}
