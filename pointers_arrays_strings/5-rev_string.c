#include "main.h"
#include "string.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: len
 */

void rev_string(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
		strrev(s);
	}

	return (len);
}
