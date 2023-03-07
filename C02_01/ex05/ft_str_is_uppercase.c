/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:33:27 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/01 20:27:19 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	n;
	int	a;

	n = 0;
	while (str[n] != '\0')
	{
		a = str[n];
		if (a >= 65 && a <= 90)
			n++;
		else
			return (0);
	}
	return (1);
}
