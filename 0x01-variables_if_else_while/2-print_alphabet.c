#include <stdio.h>

/**
 * main - Prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
