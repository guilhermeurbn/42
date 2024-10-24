/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:49:11 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/24 12:31:07 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb >= 1)
	{
		i = ft_recursive_factorial(nb - 1) * nb;
	}
	return (i);
}
/*int main()
{
	int a;

	a = ft_recursive_factorial(5);
	printf("%d", a);
	return (0);
}*/
