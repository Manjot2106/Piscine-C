/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:51:09 by msingh            #+#    #+#             */
/*   Updated: 2025/09/21 17:24:55 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int main ()
{
    long int nb  = 16;
    printf("%d\n", ft_sqrt(nb));
        long int nb1  = 9875646;
    printf("%d\n", ft_sqrt(nb1));
        long int nb2 = 12358666;
    printf("%d\n", ft_sqrt(nb2));
        long int nb3  = 9;
    printf("%d\n", ft_sqrt(nb3));
        long int nb4  = 25;
    printf("%d\n", ft_sqrt(nb4));
        long int nb5  = 121;
    printf("%d\n", ft_sqrt(nb5));
}
*/