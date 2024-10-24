/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:20:44 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/24 12:27:18 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i < 123)
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
}
/*int main()
{
    ft_print_alphabet();
    return 0;
}*/
