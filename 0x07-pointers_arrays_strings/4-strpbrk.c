#include "holberton.h"
#define NULL 0
/**
* _strpbrk - function
* @s: string to search in first  occur
* @accept: string parameter set
*
* Description: function that searches a string for any of a set of bytes.
* Return: pointer to type s or null
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	for (j = 0; accept[j]; j++)

	return (accept);
}
