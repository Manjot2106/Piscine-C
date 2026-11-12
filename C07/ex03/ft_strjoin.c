/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:01:01 by msingh            #+#    #+#             */
/*   Updated: 2025/09/29 08:40:48 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *strs)
{
	int	i;

	i = 0;
	while (strs[i] && strs)
		i++;
	return (i);
}

char	*ft_strcat(char *str, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				str[k++] = sep[j++];
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		lenstr;
	int		lensep;
	int		i;
	char	*str;

	if (size <= 0)
	{
		str = malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	i = 0;
	lensep = 0;
	lenstr = 0;
	while (i < size)
	{
		lenstr += ft_strlen(strs[i]);
		i++;
	}
	lensep = ft_strlen(sep) * (size - 1);
	str = malloc(sizeof(char) * (lenstr + 1 + lensep));
	if (!str)
		return (NULL);
	str = ft_strcat(str, size, strs, sep);
	return (str);
}
/*
int main()
{
    char *str[] = {"Hello", "he", "ha"};
    char *sep = "---";
    int size = 3;
    char *res;

    res = ft_strjoin(size, str, sep);
    printf("%s\n", res);
    free (res);

}*/
