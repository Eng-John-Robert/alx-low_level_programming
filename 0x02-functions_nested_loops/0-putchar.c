#include "main.h"

/**
 * main - prints _putchar, followed by new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char oli[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(oli[c]);
	}
	_putchar('\n');
	return (0);
}
