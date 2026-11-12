/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:11:34 by msingh            #+#    #+#             */
/*   Updated: 2025/09/13 09:53:40 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	size--;
	while (i < size)
	{
		j = tab[i];
		tab[i] = tab[size];
		tab[size] = j;
		i++;
		size--;
	}
}

/*int main()
{
	int tab[] = { 8, 2, 3, 9, 1 };
	int i = 0;
	int size = 5;
	while (tab[i])
	{
		printf("%d ", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	printf("\n");
	while (tab[i])
        {
                printf("%d ", tab[i]);
                i++;
        }
}*/
