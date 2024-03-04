#include "main.h"
/**
 * checker - check input number from n to the base
 * @n: number is squared and compared against base
 * @b: base number to check
 * Return: natural square root of number base
 */
int checker(int n, int b)
{
if (n * n == b)
return (n);
if (n * n > b)
return (-1);
return (checker(n + 1, b));
}
/**
 * _sqrt_recursion - return the natural square root of a number n
 * @n: number to check for square root
 * Return: the natural square root of a number n
 */
int _sqrt_recursion(int n)
{
return (checker(1, n));
}
