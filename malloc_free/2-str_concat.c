#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: str one
 * @s2: str two
 * Return: pointer to concatenate str
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int len1 = 0, len2 = 0, d = 0, b = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[d])
		len1++, i++;

	while (s2[b])
		len2++, j++;

	len2++;

	conc = malloc(sizeof(char) * (len1 + len2));

	if (conc == NULL)
		return (NULL);

	d = 0, b = 0;
	while (d < len1)
	{
		conc[d] = s1[d];
		d++;
	}
	while (b < len2)
	{
		conc[d] = s2[b];
		d++, b++;
	}

	return (conc);
}
