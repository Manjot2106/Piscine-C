/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 09:25:00 by msingh            #+#    #+#             */
/*   Updated: 2025/09/13 09:45:57 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab [j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*int main ()
{
	int tab [] = {1, 6, 87, 45, 67};
	int size = 5;
	int i = 0;
	while (i < size)
		printf("%d ", tab[i++]);
	printf("\n");
	ft_sort_int_tab(tab, size);
	i = 0;
        while (i < size)
                printf("%d ", tab[i++]);
        printf("\n");
}*/
