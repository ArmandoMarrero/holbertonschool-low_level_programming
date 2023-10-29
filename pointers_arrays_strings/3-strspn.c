#include "main.h"
#include <string.h>

/**
  * _strspn - gets the length of a prefix substring
  *@s: the string
  *@accept: the input
  *Return:number of bytes in the initial segment of s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;

	length = strspn(s, accept);

	return (length);

}
