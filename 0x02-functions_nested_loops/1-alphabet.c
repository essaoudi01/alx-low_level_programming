#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description:c program that print alphabet lowercase
 *
 */

void print_alphabet(void)

{
	char *al = "abcdefghijklmnopqrstuvwxyz";
		for(int i = 0; i < 26;i++)
		{
			putchar(al[i]);
		}
	putchar('\n');


}
