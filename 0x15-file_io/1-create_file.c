#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a string to be written to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, i = 0;
ssize_t count = 0, nwr, err = -1;


if (filename == NULL)
{
return (-1);
}

if (text_content == NULL)
{
text_content = "";
}

while (text_content[i])
{
count++;
i++;
}

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fd == -1)
{
return (-1);
}
nwr = write(fd, text_content, count);
if (nwr == err)
{
return (-1);
}

close(fd);
return (1);
}
