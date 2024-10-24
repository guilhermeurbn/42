/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:31:40 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/24 19:43:22 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define ABS(Value) ((Value) < 0 ? -(Value) : (Value))
int main() 
{
    int a = -5;
    int b = 3;
    
    printf("%d\n", ABS(a));
    printf("%d", ABS(b));

    return 0;
}