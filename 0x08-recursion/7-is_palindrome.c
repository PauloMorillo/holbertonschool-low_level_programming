#include "holberton.h"

/**
 * lengthw - function to know the length of the word
 * @s: word
 * Return: lengthw like int
 */
int lengthw(char *s)
{
	if (*s != '\0')
	{
		return ((1 + lengthw(s + 1)));
	}
	return (0);
}
/**
 * is_palindrome - function to know if a word is a palindrome
 * @s: word to know if is a pailindrome
 * Return: truth statement - boolean
 */
int is_palindrome(char *s)
{
	int a = 0, res;

	if (*s != '\0')
	{
		a = lengthw(s);
		res = voidword(s, a, 0, a / 2);
		return (res);
	}
	else
	{
		return (0);
	}
}
/**
 * voidword - know letter by letter if is palindrome
 * @s: input word to compare
 * @a: length of the array
 * @b: begins counter
 * @med: medium value for iteration
 * Return: 1 if is a palindrome else 0
 */
int voidword(char *s, int a, int b, int med)
{
	if (b < med)
	{
		if (s[b] == s[a - 1])
		{
			voidword(s, a - 1, b + 1, med);
		}
		else
		{
			return (0);
		}
	}
	return (1);

}
