#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: Always 0 (Sucess)
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
