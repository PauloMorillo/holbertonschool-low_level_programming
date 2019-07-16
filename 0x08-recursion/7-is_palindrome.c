#include "holberton.h"
/**
 * is_palindrome - function to know if a word is a palindrome
 * @s: word to know if is a pailindrome
 * @a:
 * Return: truth statement - boolean
 */
int lengthw(char *s)
{
	if (*s != '\0')
	{
		return ((1 + moveinw(s + 1)));

int is_palindrome(char *s)
{
	int a = 0;

	if (*s != '\0')
	{
		a = lengthw(s);

	}
	else
	{
		return (0);
	}
}
/**
 * is_prime_number - checks if # is prime
 * @n: number to check
 * Return: boolean
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
