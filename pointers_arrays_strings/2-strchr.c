
#include "main.h"

/**
  *_strchr -  locates a character in a string
  *@s: The string
  *@c: the character in the string
  *Return:first occurrence of the character c in the string s else NULL
  */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;

	}
	if (c == '\0')
	{
		return (ptr);
	}


	return (0);

}
