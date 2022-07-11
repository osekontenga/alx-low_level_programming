#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - converts pointers to inegers
 *
 * n is a pointer
 *
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	n = (int *)n;
	*n = 98;
}
