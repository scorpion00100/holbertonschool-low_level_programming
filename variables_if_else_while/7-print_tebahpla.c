#include <stdio.h>

/**
 * main - print reverse alphabet
 * Return: Always 0
 */
int main(void)
{
	char lower = 'a'

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');

	return (0);
}
