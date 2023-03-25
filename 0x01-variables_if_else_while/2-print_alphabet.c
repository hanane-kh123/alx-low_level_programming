#include <stdlib.h>
#include <stdio.h>
/**
* main - Print the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
