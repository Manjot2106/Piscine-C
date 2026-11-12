/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:05:13 by msingh            #+#    #+#             */
/*   Updated: 2025/09/12 10:25:00 by msingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main ()
{
	int a = 11;
	int b = 3;
	int division = 0;
	int modules = 0;
	ft_div_mod(a, b,  &division, &modules);
	printf("%d\n""%d\n", division, modules);
	return 0;

}*/
