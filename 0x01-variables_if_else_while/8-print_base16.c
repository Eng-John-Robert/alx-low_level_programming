#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char a;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
