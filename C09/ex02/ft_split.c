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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	*ft_strndup(char *src, int n)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(n + 1);
	if (!res)
		return (NULL);
	while (i < n)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		start;
	int		word;
	char	**arr;

	i = 0;
	j = 0;
	word = count_words(str, charset);
	arr = malloc((word + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	word = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		start = i;
		while (str[i] && !is_sep(str[i], charset))
			i++;
		if (i > start)
			arr[word++] = ft_strndup(str + start, i - start);
	}
	arr[word] = (NULL);
	return (arr);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: %s <string> <charset>\n", argv[0]);
		return 1;
	}
	char **result = ft_split(argv[1], argv[2]);
	int i = 0;
	while (result && result[i])
	{
		printf("[%s]\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return 0;
}
*/
