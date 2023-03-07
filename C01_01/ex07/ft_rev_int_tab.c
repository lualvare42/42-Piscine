/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:28:26 by lualvare          #+#    #+#             */
/*   Updated: 2022/10/31 13:03:41 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	aux;

	i = size - 1;
	n = 0;
	while (i > n)
	{
		aux = tab[n];
		tab[n] = *(tab + i);
		tab[i] = aux;
		i--;
		n++;
	}
}
