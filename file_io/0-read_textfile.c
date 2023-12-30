#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
* read_textfile - function that reads a text file and prints.
* @filename: Is a pointer.
* @letters: is the number of letters it should read and print.
* Return: the actual number of letters it could read and print.
*/

size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_read;

	fd = open(filename, O_RDONLY);
	buf = (char *)malloc(1024);

	if (fd == -1)
	{
		return (0);
	}
	else
	{
		bytes_read = read(fd, buf, letters);
		close(fd);
		if (bytes_read == 0)
		{
			return (0);
		}
		else
		{
		    printf("%s \n", buf);
		}
	}
	return (0);
}
