/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 12:16:02 by msingh            #+#    #+#             */
/*   Updated: 2025/09/21 15:31:51 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str);

int	ft_check(char *str);

int	ft_is_in_base(char c, char *str);

int	ft_atoi_base(char *str, char *base);

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

int	ft_is_in_base(char c, char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i < size)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_is(char c, char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i < size)
	{
		if (c == str[i])
			break ;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	m;

	i = 0;
	j = 0;
	m = 1;
	if (ft_check(base) == 0)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
			m *= -1;
		i++;
	}
	while (ft_is_in_base(str[i], base))
	{
		j = j * ft_strlen(base) + ft_is(str[i], base);
		i++;
	}
	return (j * m);
}
/*
int main ()
{
	char str[] = {"-FF"};
	char base[] = {"0123456789ABCDEF"};
	printf("%d", ft_atoi_base(str, base));
}*/
