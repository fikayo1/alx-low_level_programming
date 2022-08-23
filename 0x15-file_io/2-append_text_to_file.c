#include "main.h"
/**
 * append_text_to_file - appends texts to  file
 * @filename: name of the file to be appended
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, i = 0, nwr;

if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_APPEND);

if (fd == -1)
{
return (-1);
}
while(text_content[i])
{
i++;
}
if (text_content)
{
nwr = write(fd, text_content, i);
if (nwr == -1)
{
return (-1);
}

}
close(fd);
return (1);
}
