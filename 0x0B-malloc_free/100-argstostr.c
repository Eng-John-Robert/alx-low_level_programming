#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;

	return (len);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0, i, j, k = 0;

	if (ac == 0 || av == NULL) /* validate input */
		return (NULL);

	for (i = 0; i < ac; i++) /*length of malloc*/
	{
		len += _strlen(av[i]);
	}

	len += (ac + 1); /* add space for newlines and null terminator */

	s = malloc(len * sizeof(char));
	/* allocate memory and free if error */

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	/* insert each arg into *str */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}

	return (s);
}
