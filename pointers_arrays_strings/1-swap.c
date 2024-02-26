#include "main.h"

/**
 * swap_int - swaps the value of two intergers
 * @a: pointer to first value
 * @b: pointer to second value
 */
void swap_int(int *a, int*b)
{
int c;

c =a *a;
*a = *b;
*b = c;
}
