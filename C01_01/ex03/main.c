/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:31:52 by lualvare          #+#    #+#             */
/*   Updated: 2022/10/27 09:33:21 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *, int *);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 9;
	b = 7;

	ft_div_mod(a, b, &div, &mod);
	ft_putchar(div + '0');
	ft_putchar(mod + '0');			
	return (0);
}
