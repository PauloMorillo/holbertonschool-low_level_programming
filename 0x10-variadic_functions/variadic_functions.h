#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

/**
 * struct formatarg - Struct of elements
 * @forma: Dog's name
 * @f: dog's age
 *
 * Description: Longer description
 */
typedef struct formatarg
{
	char forma;
	void (*f)(va_list);

} formatico;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printch(va_list valist);
void prints(va_list valist);
void printi(va_list valist);
void printflo(va_list valist);
#endif
