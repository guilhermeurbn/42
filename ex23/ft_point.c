/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:29:10 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/24 21:34:43 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>
void set_point(t_point *point) {
    point->x = 42;
    point->y = 21;
}

int main(void) {
    t_point point;
    set_point(&point);
    printf("Ponto: (%d, %d)\n", point.x, point.y);  // Exibe as coordenada
    return 0;
}