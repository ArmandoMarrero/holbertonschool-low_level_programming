#include <stdio.h>
#include "main.h"
/**
 *** _isalpha - print alphabet
 *** @c: bhabdh
 *** Return: uhuh
 **/

int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	return (0);
}
