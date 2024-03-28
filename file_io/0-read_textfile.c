#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * @filename: A pointer to the name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, rd, tot_rd;
char *buf;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(fd);
return (0);
}
tot_rd = 0;
while (tot_rd < (ssize_t)letters)
{
rd = read(fd, buf + tot_rd, letters - tot_rd);
if (rd == -1)
{
free(buf);
close(fd);
return (0);
}
tot_rd += rd;
}
if (write(STDOUT_FILENO, buf, tot_rd) != tot_rd)
{
free(buf);
close(fd);
return (0);
}
free(buf);
close(fd);
return (tot_rd);
}
