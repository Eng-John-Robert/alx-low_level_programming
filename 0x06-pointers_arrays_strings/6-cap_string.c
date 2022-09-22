#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s - string
 * Return : returns length as intager
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

/**
 * cap_string - capitalize first letter of each word
 * @str: The string to be capitalized.
 *
 * Return: returns the capitalized string.
 */

char *cap_string(char *s)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
			str[index] -= 32;
	}

	return (str);
}
