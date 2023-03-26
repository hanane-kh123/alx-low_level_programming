#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Print All alphabetic
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
