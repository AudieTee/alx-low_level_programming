#include "main.h"
/**
<<<<<<< HEAD
 *_memset -   fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: value to set
 *@n: bytes of the memory
 *Return: dest
=======
 * _memset - this funtion fills memory with a constant byte.
 * @b: a constant byte.
 * @n: number of bytes.
 * @s: pointers to memory.
 *
 * Return: A pointer to memory area s.
>>>>>>> f44d1aaeeedc42cd78a409f5dc6cbc50371cb45a
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

<<<<<<< HEAD
	/*Delacring FOR*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	} /*END FOR*/
=======
	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
>>>>>>> f44d1aaeeedc42cd78a409f5dc6cbc50371cb45a

	return (s);
}
