/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:18:37 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/09 12:03:34 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	aux;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	aux = nb;
	while (power > 1)
	{
		aux = aux * nb;
		power--;
	}
	return (aux);
}
