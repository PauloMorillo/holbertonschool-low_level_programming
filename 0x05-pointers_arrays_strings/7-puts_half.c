#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - print all strings with step 2
 * @str: input strings
 *
 *
 */

void puts_half(char *str)
{
	int a1 = 0;
	/*int c = 0;*/
	int mitad;
	int res;

	while (str[a1] != '\0')
	{
		/*_putchar(s[a1]);*/
		a1 = a1 + 1;
	}
	res = a1 % 2;
	/*puts(str);*/
	/*printf("%d esto es el modulo",res);*/
	if (res == 0)
	{
		mitad = a1 / 2;
		/*puts("entre en par");*/
	}
	else
	{
		mitad = ((a1 - 1) / 2) + 1;
		/*puts("entre en impar");*/
	}
	/*printf("%d esta vuelta",mitad);*/
	/*printf("%d longitud", a1);*/
	while (mitad < a1)
	{
		_putchar(str[mitad]);
		 mitad = mitad + 1;
	}
	_putchar('\n');
}
