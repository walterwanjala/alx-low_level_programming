#include "main.h"

/**
 * print_alphabet - function to print abc
 * code written by Vincent Kimatu
 * Return: always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
