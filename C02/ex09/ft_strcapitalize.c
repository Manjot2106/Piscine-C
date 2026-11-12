/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:05:43 by msingh            #+#    #+#             */
/*   Updated: 2025/09/15 13:15:07 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_stlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	ft_stlowcase(str);
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (j == 1))
		{
			str[i] -= 32;
			j = 0;
		}
		else if ((str[i] >= '0' && str[i] <= '9'))
			j = 0;
		else if ((str[i] >= 'a' && str[i] <= 'z'))
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

/*int main ()
{
    char str [] = {"hi, how are yOU? 42words foRTY-two; fifty+and+one"};
    printf("%s\n", ft_strcapitalize(str));
}*/
