/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:48:02 by ocviller          #+#    #+#             */
/*   Updated: 2025/04/26 21:05:30 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 500000

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_putnstr(char *str, int n)
{
	write(STDOUT_FILENO, str, n);
}

void	ft_display_file(char *file)
{
	int		fd;
	char	buffer[BUFFER_SIZE];
	int		bytes_read;

	fd = open(file, O_RDONLY);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		ft_putnstr(buffer, bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read < 0)
		write(STDERR_FILENO, "Cannot read file.\n", 19);
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(STDERR_FILENO, "File name missing.\n", 20);
	else if (argc > 2)
		write(STDERR_FILENO, "Too many arguments.\n", 21);
	else
		ft_display_file(argv[1]);
}
