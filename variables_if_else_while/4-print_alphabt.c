#include <stdio.h>

/**
 * main - print alphabet in lowercase except q and e
 * Return: Alaways 0
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if ((lower != 'q') && (lower != 'e'))
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');

	return (0);
}
