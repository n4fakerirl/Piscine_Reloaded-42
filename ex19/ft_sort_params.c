/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:07:05 by ocviller          #+#    #+#             */
/*   Updated: 2025/04/26 13:30:10 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int argc, char **argv)
{
	int		i;
	int		y;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		y = 1;
		while (y < argc - 1)
		{
			if (ft_strcmp(argv[y], argv[y + 1]) > 0)
			{
				tmp = argv[y];
				argv[y] = argv[y + 1];
				argv[y + 1] = tmp;
			}
			y++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	y;

	y = 1;
	ft_sort(argc, argv);
	while (y < argc)
	{
		ft_putstr(argv[y]);
		ft_putchar('\n');
		y++;
	}
}
