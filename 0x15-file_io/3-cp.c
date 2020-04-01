#include "holberton.h"
#define BUFFSIZE 1204

/**
 * main - copy file to another(create new file too)
 * @ac: arg count
 * @av: arg list: from and to file
 * Return: 0;
 */

int main(int ac, char **av)
{
	int from, to;
	from = to = 1;
	char buff[BUFFSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while (from)
	{
		from = read(from, buff, BUFFSIZE);
		if (from == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (from > 0)
		{
			to = write(to, buff, from);
			if (to == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	to = close(from);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close from %d\n", from), exit(100);
	to = close(to);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close from %d\n", to), exit(100);
	return (0);
}
