#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from
 * @argc: the number of elements it takes in
 * @argv: argument vector
 * Return: o on success
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
