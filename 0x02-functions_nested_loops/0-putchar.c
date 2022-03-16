#include "main.h"

/**
 * main - Entry point
 *
 * Return: nothing, return void
 */

int main(void)
{
	char *word = "_putchar";

	while (*word != '\0')
	{
		_putchar.(*word);
		word++;
	}
	_putchar('\n')

	return (0);
}
