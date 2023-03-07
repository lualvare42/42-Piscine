/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:33:27 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/03 11:10:10 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char n)
{
	if (n < 32 || n > 126) //antes estaba en 127 por eso ejercicio lo dio mal moulinette
		return (0);
	else
		return (1);
}

void	ft_hexa(char a)
{
	char	*hex;
	int		div;
	int		mod;

	hex = "0123456789abcdef";
	if (a < 0)
		a = a + 256;
	div = a / 16;
	mod = a % 16;
	write(1, &hex[div], 1);
	write(1, &hex[mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (ft_str_is_printable(str[n]) == 1)
			write(1, &str[n], 1);
		else
		{
			write(1, "\", 1);
			ft_hexa(str[n]);
		}
		n++;
	}
}
