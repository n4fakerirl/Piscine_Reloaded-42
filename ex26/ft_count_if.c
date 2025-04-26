/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:28:39 by ocviller          #+#    #+#             */
/*   Updated: 2025/04/26 19:16:07 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
