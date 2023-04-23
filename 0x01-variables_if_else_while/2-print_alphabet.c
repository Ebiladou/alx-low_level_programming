#include <stdio.h>

/**
 * main - Prints the lowercase alphabet, followed by a newline character.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(i + 'a');
	}

	putchar('\n');

	return (0);
}
