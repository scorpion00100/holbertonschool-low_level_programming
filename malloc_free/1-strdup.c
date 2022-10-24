#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	int i = 0, s = 0;
	char *new_s;

	if (str == NULL)
		return (NULL);

	while (str[i])
		s++, i++;
	s++;

	new_s = malloc(sizeof(char) * s);

	if (new_s == NULL)
		return (NULL);

	i = 0;
	while (i < s)
	{
		new_s[i] = str[i];
		i++;
	}

	return (new_s);
}
