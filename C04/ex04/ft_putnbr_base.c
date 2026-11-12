/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 12:16:02 by msingh            #+#    #+#             */
/*   Updated: 2025/09/18 14:12:29 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check(char *str)
{
	int	j;
	int	i;
	int	s;

	i = 0;
	j = 0;
	s = ft_strlen(str);
	if (s <= 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] <= 32 || str[i] >= 127)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	check;
	int	size;

	check = ft_check(base);
	size = ft_strlen(base);
	if (check == 0)
		return ;
	if (nbr == -2147483648)
	{
		ft_putnbr_base((nbr / size), base);
		ft_putnbr_base(-(nbr % size), base);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base((nbr * -1), base);
	}
	else if (nbr >= size)
	{
		ft_putnbr_base((nbr / size), base);
		ft_putnbr_base((nbr % size), base);
	}
	else
		ft_putchar(base[nbr]);
}
/*
int main ()
{
	int nbr = 255;
	char base[] = {"0123456789ABCDEF"};
	ft_putnbr_base(nbr, base);
	write (1, "\n", 1);
	char tab1[] = {"0123456789"};
	ft_putnbr_base(nbr, tab1);
	write (1, "\n", 1);
	char tab2[] = {"01"};
	ft_putnbr_base(nbr, tab2);
}
*/