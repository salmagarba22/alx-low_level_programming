#include "main.h"

/**
 *_memcpy - Function copies n bytes from
 * memory area src to memory area dest
 *@n:Number of bytes
 *@src: Memory Source
 *@dest: Memory area destination
 *Return: pointer to destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		dest[i] = src[i];
	}

	return (dest);
}
