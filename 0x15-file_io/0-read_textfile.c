#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: the filename to be read
 * @letters: the number of letters it should read
 * Return: the number of letter it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf;
size_t out, nwr;

if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);

if (fd == -1)
{
return (0);
}

buf = malloc(sizeof(char) * (letters));
if (buf == NULL)
{
return (0);
}

out = read(fd, buf, letters);

nwr = write(1, buf, out);

buf[letters] = '\0';


close(fd);

free(buf);

return (nwr);
}
