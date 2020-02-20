#include "holberton.h"
/**
* _strcmp - function
* @s1: comparing string
* @s2: comparing string
*
* Description: compare str1 to str2
* Return: str1, str2
*/
int _strcmp(char *s1, char *s2)
{
	int len;

	for (len = 0; s1[len] && s2[len]; len++)
	{
		if (s1[len] == s2[len])
			len++;
			break;
	}
	return (s1[len] - s2[len]);
}
