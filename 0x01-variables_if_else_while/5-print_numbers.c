#include <stdio.h>

/**
 * main -This Prints numbers from 0 to 9.
 *
 * Return: this is always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}

