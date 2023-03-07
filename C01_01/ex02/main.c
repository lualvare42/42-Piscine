/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:31:52 by lualvare          #+#    #+#             */
/*   Updated: 2022/10/26 21:54:28 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *, int *);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int a;
	int b;

	a = 57;
	b = 55;

	ft_swap(&a, &b);
	ft_putchar(a);
	ft_putchar(b);			
	return (0);
}
