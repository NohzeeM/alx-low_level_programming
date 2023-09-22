#include "main.h"
/**
 * reverse_array - function to reverse an array
 * @a: first parameter
 * @n: second function parameter
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int b, c;

for (b = 0; b < n--; b++)
{
	c = a[b];
	a[b] = a[n];
	a[n] = c;
}
}
