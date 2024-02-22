#include "main.h"
/**
 * _islower - entry point
 * Description: Controls if a character is in lowercase
 * @c variable to check 
 * Return: return 0 or 1
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
