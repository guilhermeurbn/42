/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:32:52 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/24 12:30:48 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		i = nb * i;
		nb--;
	}
	return (i);
}
/*int main()
{
	int a;

	a = ft_iterative_factorial(12);
	printf("%d", a);
	return (0);
}*/
