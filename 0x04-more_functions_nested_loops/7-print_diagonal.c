#include "main.h"

/**
 * print_line - Draws a diagonal line using the character \.
 * @n: The number of _ characters to be printed.
 **/
void print_diagonal(int n)
{
	int dish, space;

	if (n > 0)
	{
		for (dish = 0; dish < n; dish++)
		{
			for (space = 0; space < dish; space++)
				_putchar(' ');
			_putchar('\\');

			if (dish == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
