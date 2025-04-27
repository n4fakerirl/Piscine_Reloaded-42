/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 21:34:10 by ocviller          #+#    #+#             */
/*   Updated: 2025/04/26 21:40:50 by ocviller         ###   ########.fr       */
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

void	ft_puterr(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		write(STDERR_FILENO, &str[i], 1);
		i++;
	}
}

void	ft_print_file(char *path)
{
	int		fd;
	char	buffer[BUFFER_SIZE];
	int		bytes_read;

	fd = open(path, O_RDONLY);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		ft_putnstr(buffer, bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read < 0)
		ft_puterr("Cannot read file.\n");
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_puterr("File name missing.\n");
	}
	else if (argc > 2)
	{
		ft_puterr("Too many arguments.\n");
	}
	else
		ft_print_file(argv[1]);
}
