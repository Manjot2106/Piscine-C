/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 09:01:02 by msingh            #+#    #+#             */
/*   Updated: 2025/09/29 09:01:04 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(src);
	dst = malloc((size +1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*d;

	i = 0;
	d = malloc((ac + 1) * sizeof(t_stock_str));
	if (!d)
		return (NULL);
	while (i < ac)
	{
		d[i].str = av[i];
		d[i].size = ft_strlen(av[i]);
		d[i].copy = ft_strdup(av[i]);
		i++;
	}
	d[i].str = 0 ;
	return (d);
}
