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

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
