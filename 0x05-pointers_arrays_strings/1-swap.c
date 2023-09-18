#include "main.h"

/**
 * swap_int - swaps two interger variables
 * @a: swaps addresses with b
 * @b: swaps addresses with a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int change;

change = *b;
*b = *a;
*a = change;
}
