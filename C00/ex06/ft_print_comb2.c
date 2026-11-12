/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:48:01 by msingh            #+#    #+#             */
/*   Updated: 2025/09/11 14:08:35 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int i, int j);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = 0;
	while (i <= 99)
	{
		j = i +1;
		while (j <= 99)
		{
			ft_print(i, j);
			j++;
		}
		i++;
	}
}

void	ft_print(int i, int j)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = i / 10 + '0';
	b = i % 10 + '0';
	c = j / 10 + '0';
	d = j % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (i != 98)
	{
		write(1, ",", 1);
	}
}

/*int main (void)
{
	ft_print_comb2();
	return 0;
}*/
