/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:19:35 by lualvare          #+#    #+#             */
/*   Updated: 2022/10/24 20:14:02 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_aux(char n, char x)
{
	if (x == 0)
		n = n / 10 + '0';
	else
		n = n % 10 + '0';
	return (n);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(ft_aux(a, 0));
			ft_putchar(ft_aux(a, 1));
			ft_putchar(' ');
			ft_putchar(ft_aux(b, 0));
			ft_putchar(ft_aux(b, 1));
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
	a++;
	}
}
