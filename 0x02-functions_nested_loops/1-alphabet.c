#include "main.h"
/**
 * print_alphabet -print a-z
 *
 * Return: Always(0)
 */
void print_alphabet(void)
{
	char small;

	for (small = 'a'; small <= 'z'; small++)
	_putchar(small);
	_putchar('\n');
}
