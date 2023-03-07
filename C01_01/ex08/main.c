/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:31:52 by lualvare          #+#    #+#             */
/*   Updated: 2022/10/31 13:05:42 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sort_int_tab(int *, int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	len [] = {-8, 505, 2002, -1};
	int size;

	size = 4;
	printf("%d ", len[0]);
	printf("%d ", len[1]);
	printf("%d ", len[2]);
	printf("%d \n", len[3]);

	ft_sort_int_tab(len, size);
	printf("%d ", len[0]);
	printf("%d ", len[1]);
	printf("%d ", len[2]);
	printf("%d ", len[3]);
	return (0);
}
