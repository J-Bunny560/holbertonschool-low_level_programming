#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: string to be checked
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s)
{
s++;
return (1 + _strlen_recursion(s));
}
return (0);
}
