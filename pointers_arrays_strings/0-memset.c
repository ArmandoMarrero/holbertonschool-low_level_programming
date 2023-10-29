#include "main.h"

/**
  *_memset - fills memory with a constant byte
  *@s: pointer to a memory address to be filled
  *@b: constant byte to be used to fill memory
  *@n: number of bytes to be filled
  *Return: pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		*ptr++ = b;
	}

	return (s);

}
