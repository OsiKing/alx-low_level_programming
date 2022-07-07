#include "main.h"

/**
 * print_line - Draws a diagonal line using the character \.
 * @n: The number of _ characters to be printed.
 **/
void print_diagonal(int n)
{
	int dish;

	if (n > 0)
	{
		for (dish = 0; dish < n; dish++)
			_putchar('\');
	}

	_putchar('\n');
}
