#include <stdio.h>
/**
 * main - our main function of the code
 * Return: 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu bytes(s)\n",(unsigned long)sizeof(a));
	printf("Size of an int: %lu bytes(s)\n",(unsigned long)sizeof(b));
	printf("Size of a long: %lu bytes(s)\n",(unsigned long)sizeof(c));
	printf("Size of a long int: %lu bytes(s)\n",(unsigned long)sizeof(d));
	printf("Size of a float: %lu bytes(s)\n",(unsigned long)sizeof(e));

	return(0);
}
