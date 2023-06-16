#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return:Is Always 0 (which means Success)
 */
int main(void)
{
char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 52; a++)
	{
		putchar(alph[a]);
	}
	putchar('\n');
	return (0);
}

