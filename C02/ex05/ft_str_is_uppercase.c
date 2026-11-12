/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:05:43 by msingh            #+#    #+#             */
/*   Updated: 2025/09/15 13:00:13 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*int main ()
{
    char str [] = {"SDFSD"};
    printf("%d\n", ft_str_is_uppercase(str));
    char stc [] = {"12asas3"};
    printf("%d\n", ft_str_is_uppercase(stc));
    char stz [] = {"sbahsbh"};
    printf("%d\n", ft_str_is_uppercase(stz));
    char sta [] = {""};
    printf("%d\n", ft_str_is_uppercase(sta));
}*/
