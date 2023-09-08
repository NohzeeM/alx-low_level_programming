#include <stdio.h>
/**
 * main - main function of the program
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);
	putchar('\n');
	return (0);
}
