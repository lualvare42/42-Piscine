/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:00:06 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/01 10:45:53 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char	A;
	int		x;
	
	A = 6 + 48;
	ft_putchar(A);
//	x = A - '0';
	printf("%c", A);
	return 0;
}
