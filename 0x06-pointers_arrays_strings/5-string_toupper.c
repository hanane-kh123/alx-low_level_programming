#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @a: string
 * Return: string
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; *(a + i); i++)
		if (*(a + i) > 96 && *(a + i) < 123)
			*(a + i) = *(a + i) - 32;
	return (a);
}
