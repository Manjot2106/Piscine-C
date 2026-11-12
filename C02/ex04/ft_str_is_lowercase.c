/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:05:43 by msingh            #+#    #+#             */
/*   Updated: 2025/09/15 12:57:57 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*int main ()
{
    char str [] = {"SDFSDssF1"};
    printf("%d\n", ft_str_is_lowercase(str));
    char stc [] = {"123"};
    printf("%d\n", ft_str_is_lowercase(stc));
    char stz [] = {"sbahsbh"};
    printf("%d\n", ft_str_is_lowercase(stz));
    char sta [] = {""};
    printf("%d\n", ft_str_is_lowercase(sta));
}*/
