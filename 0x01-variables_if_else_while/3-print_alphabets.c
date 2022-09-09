#include <stdio.h>

/**
 *
 * main - Prints alphabets in upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for(a = 'a'; a <= 'z'; a++)
		putchar (a);
	for(a = 'A'; a <= 'Z'; a++)
		puchar (a);

	putchar('\n');
	return (0);
}
