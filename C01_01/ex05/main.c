/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:31:52 by lualvare          #+#    #+#             */
/*   Updated: 2022/10/27 20:43:50 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	arr[] = "Hola mi bumby";

	ft_putstr(arr);			
	return (0);
}
