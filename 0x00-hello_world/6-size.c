#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int entero;
	long int lentero;
	long long int llentero;
	float decimal;
	char caracter;

	printf("Size of a char: %ld byte(s)\n", sizeof(caracter));
	printf("Size of an int: %ld byte(s)\n", sizeof(entero));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lentero));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(llentero));
	printf("Size of a float: %ld byte(s)\n", sizeof(decimal));
	return (0);
}
