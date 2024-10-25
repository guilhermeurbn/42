/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:19:00 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/25 15:49:47 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
{
    
}
void ft_foreach(int *tab, int length, void (*f)(int))
{
    int i;

    i = 0;
    while(i < length)
    {
        f(tab[i]);
        i++;
    }
}
int main()
{
    int tab[] = {1, 2, 3, 4, 1337};
    int lenght = sizeof(tab) / sizeof(tab[0]);

    ft_foreach(tab, 1337, &ft_putnbr);
}