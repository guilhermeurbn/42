/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:24:17 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/24 12:29:53 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*int main()
{
	int x;
	int y;

	x = 10;
	y = 5;
	ft_swap(&x, &y);
	printf("x = %d\n", x);
	printf("y = %d\n", y);

}*/
