/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:05:43 by msingh            #+#    #+#             */
/*   Updated: 2025/09/15 12:51:15 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (!(str[i] >= 'A' && str[i] <= 'Z' ))
				return (0);
		}
		i++;
	}
	return (1);
}
/*int main ()
{
    char str [] = {"SDFSDssF"};
    printf("%d\n", ft_str_is_alpha(str));
    char stc [] = {"123"};
    printf("%d\n", ft_str_is_alpha(stc));
    char sta [] = {""};
    printf("%d\n", ft_str_is_alpha(sta));

}*/
