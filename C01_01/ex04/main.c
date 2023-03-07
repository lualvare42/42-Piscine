/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:31:52 by lualvare          #+#    #+#             */
/*   Updated: 2022/10/27 09:52:03 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *, int *);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int a;
	int b;

	a = 9;
	b = 7;

	ft_ultimate_div_mod(&a, &b);
	ft_putchar(a + '0');
	ft_putchar(' ');
	ft_putchar(b + '0');			
	return (0);
}
