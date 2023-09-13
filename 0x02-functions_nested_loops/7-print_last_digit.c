#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number that is printed
 * Return: the value of the last number
 */
int print_last_digit(int n)
{
int lastnum;

lastnum = n % 10;
if (lastnum < 0)
{
lastnum = lastnum * -1;
}
_putchar(lastnum + '0');
return (lastnum);
}
