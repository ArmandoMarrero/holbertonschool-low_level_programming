#include "main.h"
#include <string.h>

/**
  *_strpbrk - searches a string for any of a set of bytes
  *@s: the string
  *@accept: the other string
  *Return: pointer to the byte in s or NULL if not found
  */
char *_strpbrk(char *s, char *accept)
{
	char *match = strpbrk(s, accept);

	if (match == strpbrk(s, accept))

		return (match);

	else
		return (NULL);

}
