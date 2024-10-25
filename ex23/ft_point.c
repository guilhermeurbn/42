/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:29:10 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/25 12:16:54 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
# include <stdio.h>

int main(void) {
	t_point point;

	set_point(&point);
	printf("x: %d\n", point.x);
	printf("y: %d\n", point.y);

	return 0;
}
