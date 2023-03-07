/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:11:19 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/07 20:41:41 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{	
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = argc - 1;
	while (i > 0)
	{
		n = 0;
		while (argv[i][n])
		{
			putchar(argv[i][n]);
			n++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
