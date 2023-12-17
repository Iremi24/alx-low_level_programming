#include "main.h"
/**
 * _memset - Program a block of memory with a particular value
 * @s: starting address of memory to be filled
 * @b: the specific value
 * @n: number of bytes to change
 *
 * Return: change array with new value for a byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
