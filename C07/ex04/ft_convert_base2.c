/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:01:01 by msingh            #+#    #+#             */
/*   Updated: 2025/09/22 14:01:21 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	int_len_base(int nbr, int base_len);

int	ft_strlen(char *str);

int	ft_pos(int n);

int	base_is_valid(char *base)
{
	int	i;
	int	len;
	int	j;

	len = ft_strlen(base);
	if (len <= 1)
		return (0);
	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (base_index(str[i], base) != -1)
	{
		res = res * ft_strlen(base) + base_index(str[i], base);
		i++;
	}
	return (res * sign);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int				len;
	int				base_len;
	char			*res;
	unsigned int	i;
	int				j;

	base_len = ft_strlen(base);
	len = int_len_base(nbr, base_len);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	i = ft_pos(nbr);
	if (nbr == 0)
		res[0] = base[0];
	j = len -1;
	while (i)
	{
		res[j--] = base[i % base_len];
		i = i / base_len;
	}
	if (nbr < 0)
		res[0] = '-';
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	char	*res;

	if (!base_is_valid(base_from) || !base_is_valid(base_to))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	res = ft_itoa_base(n, base_to);
	return (res);
}
/*
int main(int argc, char **argv)
{
	(void)argc;
	char *result = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s\n", result);
	free (result);
	return 0;
}
*/
