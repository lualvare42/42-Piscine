/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:57:23 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/08 11:44:05 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	aux;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	n = 1;
	aux = nb;
	while (n < nb)
	{
		aux = aux * n;
		n++;
	}
	return (aux);
}
