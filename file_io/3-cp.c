#include "main.h"

/**
 * close_fd - Closes a file descriptor and handles potential errors.
 * @fd: The file descriptor to be closed.
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
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success. Exits with a specific code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read;
	char buffer[1024];
	mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

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
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, file_perm);
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
```

### Explanation of the Fix

The core of the logic is in this structure:

```c
// 1. The loop continues as long as read() is successful and returns bytes (> 0)
while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
{
    // ... attempt to write ...
}

// 2. This check happens IMMEDIATELY after the loop terminates.
if (bytes_read == -1)
{
    // ... handle the read error and exit with code 98 ...
}

