/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:28:26 by lualvare          #+#    #+#             */
/*   Updated: 2022/10/29 10:59:29 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	aux;

	i = 1;
	n = 0;
	while (i <= size - 1)
	{
		if (tab[n] > tab[i])
		{
			aux = tab[n];
			tab[n] = tab[i];
			tab[i] = aux;
			i = 1;
			n = 0;
		}
		else
		{
			i++;
			n++;
		}
	}
}
