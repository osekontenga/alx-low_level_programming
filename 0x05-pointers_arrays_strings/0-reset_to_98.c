#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - converts pointers to integers
 *
 * @n: integer
 *
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	n = (int *)n;
	*n = 98;
}
