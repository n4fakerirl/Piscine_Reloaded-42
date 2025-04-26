/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:59:54 by ocviller          #+#    #+#             */
/*   Updated: 2025/04/26 13:29:57 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	y;

	y = 1;
	while (y < argc)
	{
		i = 0;
		while (argv[y][i])
		{
			ft_putchar(argv[y][i]);
			i++;
		}
		ft_putchar('\n');
		y++;
	}
}
