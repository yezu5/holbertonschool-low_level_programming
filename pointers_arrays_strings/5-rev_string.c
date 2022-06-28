#include "main.h"
/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int ln = 0;
	int i = 0;
	char tmp;

	while (s[ln] != '\0')
		ln++;

	while (i < ln--)
	{
		tmp = s[i];
		s[i++] = s[ln];
		s[ln] = tmp;
	}
}
