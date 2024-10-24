/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:08:59 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/24 12:34:17 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac > 1)
	{
		while (i < ac)
		{
			while (av[i][j])
			{
				ft_putchar(av[i][j]);
				j++;
			}
			ft_putchar('\n');
			j = 0;
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
