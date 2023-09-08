#include <stdio.h>
#include <unistd.h>
/**
 * main - main function
 * Description: prints char
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
