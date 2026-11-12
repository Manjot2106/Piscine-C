/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:50:10 by msingh            #+#    #+#             */
/*   Updated: 2025/09/17 08:26:45 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_s;
	unsigned int	size_d;

	i = 0;
	size_d = 0;
	size_s = 0;
	while (dest[size_d] && size_d < size)
		size_d++;
	while (src[size_s])
		size_s++;
	if (size <= size_d)
	{
		return (size + size_s);
	}
	while (src[i] && size_d + i < size - 1)
	{
		dest[size_d + i] = src[i];
		i++;
	}
	dest[size_d + i] = '\0';
	return (size_s + size_d);
}
/*
int main ()
{
    char src[] = {"123456789"};
    char dest[] = {"12345"};
    unsigned int size = 20;
    printf("%d", ft_strlcat(dest, src, size));
}*/
