#include "holberton.h"
#include <stdio.h>
/**
 * _sqrt_recursion - function calculate x root square
 * look_multiples - look the multiples to calculate the root
 * @n: input number to calculate root
 * @a: input first digit to count 
 * Return: square
 */
look_multiples(int n, int a)
{
    if (n <= 0)
    {
        return (-1);
    }
    if (a * a > n)
    {
        return (-1);
    }
    if (a * a == n)
    {
        return(a);
    }
    else
    {
        look_multiples(n, a + 1);
    }
    
}
int _sqrt_recursion(int n)
{
   int a = 1;
   return(look_multiples(n, a));
}
