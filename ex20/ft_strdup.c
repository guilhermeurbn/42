/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:03:33 by guisanto          #+#    #+#             */
/*   Updated: 2024/10/24 12:38:00 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	if (!src)
		return (NULL);
	i = strlen(src);
	dest = malloc(i + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
	char *s = ft_strdup(NULL);
	printf("%s", s);
	free(s);
	free(s);
	return 0;
}*/
