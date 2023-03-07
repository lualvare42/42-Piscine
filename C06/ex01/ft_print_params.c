/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 21:13:37 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/07 20:39:11 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 1;
	while (i < argc)
	{	
		n = 0;
		while (argv[i][n] != '\0')
		{
			ft_putstr(argv[i][n]);
			n++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
