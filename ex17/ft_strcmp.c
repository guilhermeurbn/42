/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:27:17 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/24 12:33:18 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*int main()
{
	printf("%d", ft_strcmp("ola5", "ola3"));
	return 0;
}*/
