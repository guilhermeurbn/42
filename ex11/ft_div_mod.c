/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:47:31 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/24 12:30:12 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*int main()
{
    int x;
    int y;
    int div;
    int mod;

    x = 10;
    y = 6;
    ft_div_mod(x, y, &div, &mod);
    printf("div = %d\n", div);
    printf("mod = %d\n", mod);
    return 0;
}*/
