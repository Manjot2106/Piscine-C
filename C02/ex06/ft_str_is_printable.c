/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:05:43 by msingh            #+#    #+#             */
/*   Updated: 2025/09/15 13:02:20 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*int main ()
{
    char str [] = {"SDFSD"};
    printf("%d\n", ft_str_is_printable(str));
    char stc [] = {"sdisdisjdi"};
    printf("%d\n", ft_str_is_printable(stc));
    char stz [] = {"\b"};
    printf("%d\n", ft_str_is_printable(stz));
    char sta [] = {"|"};
    printf("%d\n", ft_str_is_printable(sta));
}*/
