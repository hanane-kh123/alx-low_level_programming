#include <stdlib.h>
#include <stdio.h>
/**
* main - Print the alphabet in lowercase in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
