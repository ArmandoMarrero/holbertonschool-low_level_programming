#include "main.h"

/**
  * _memcpy - copies memory area
  *@dest: memory area to copy bytes into
  *@src: memory area to copy bytes from
  *@n: number of memory bytes to be copied
  *Return: a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;

	for (i = 0; i < n; i++)
	{
		*ptr++ = src[i];

	}


	return (dest);

}
