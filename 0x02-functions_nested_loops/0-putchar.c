#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print a word using putchar
 *
 * Return: Always (Success)
 */
int main(void)
{
	char *word = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		putchar(word[i]);
	}
		putchar('\n');

		return (0);
}
