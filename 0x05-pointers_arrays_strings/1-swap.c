#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps between int
 * a
 * b
 * Return Always 0
 */
void swap_int(int *a, int *b)/* a & b are parameters */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
