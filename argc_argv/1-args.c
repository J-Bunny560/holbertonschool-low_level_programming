#include "main.h"
#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void) argv;

return (0);
}
