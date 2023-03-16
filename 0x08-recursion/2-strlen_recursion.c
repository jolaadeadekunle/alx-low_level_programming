#include "main.h"
/**
*_strlen_recursion - Returns the length of a string.
  *@s:String length
  *
  *Return: The length of the string.
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + strlen_recursion(s + 1));
	}
}


