/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:20:44 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/24 18:09:58 by guilhermeur      ###   ########.fr       */
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
}
/*int main()
{
    ft_print_alphabet();
    return 0;
}*/
