/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:31:52 by lualvare          #+#    #+#             */
/*   Updated: 2022/10/29 14:41:50 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_rev_int_tab(int *, int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	len [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	int size;

	size = 11;
	ft_rev_int_tab(len, size);
	printf("%d", len[4]);
	printf("%d", len[5]);
	printf("%d", len[6]);
	return (0);
}
