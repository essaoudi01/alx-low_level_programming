#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	printf("Infinite loop avoided! \\o/");

	i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;

	} putchar('\n');
	return (0);
}
