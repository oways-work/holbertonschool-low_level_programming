#include "main.h"

/**
 * close_fd - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 *
 * Description: If closing fails, it prints an error message to stderr
 * and exits with code 100.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments (file names).
 *
 * Return: 0 on success.
 * Description: Exits with a specific code on failure, printing messages
 * to the standard error stream as required.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read;
	char buffer[1024];
	mode_t perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH; /* rw-rw-r-- */

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perms);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_fd(fd_from);
		exit(99);
	}
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_fd(fd_from);
		close_fd(fd_to);
		exit(98);
	}
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}

