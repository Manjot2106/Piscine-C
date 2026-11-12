/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 10:06:39 by msingh            #+#    #+#             */
/*   Updated: 2025/09/11 12:35:09 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	b;

	b = '0';
	while (b <= '9')
	{
		write(1, &b, 1);
		b++;
	}
}

/*int main (void)
{
	ft_print_numbers();
	return 0;
}*/
