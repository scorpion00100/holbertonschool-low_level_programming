#include <stdio.h>

/**
 *main - prints hexadecimal base with putchar
 *Return: Always 0
 */

int main(void)
{
	int n = '0';
	int a_f = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (a_f <= 'f')
	{
		putchar(a_to_f);
		a_f++;
	}
	putchar('\n');

	return (0);
}
