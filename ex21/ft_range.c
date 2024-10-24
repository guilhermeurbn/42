/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:37:59 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/24 19:11:04 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *a;
    int i;
    
    i = 0;
    if (min >= max)
        return (NULL);
    a = malloc(min - max);

    while(min < max)
    {
        a[i] = min;
        min++;
        i++;
    }
    return (a);
}
/*int main()
{
    int a;
    int b;
    int i;
    int *range;

    a = 0;
    b = 10;
    i = 0;
    range = ft_range(a, b);
    while(i < b - a)
    {
        printf("%d", range[i]);
        i++;
    }
    free(range);
    return (0);
}*/
