/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:52:00 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/07 20:23:17 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != 0) && (s2[i] != 0))
		i++;
	return (s1[i] - s2[i]);
}

char	**ft_sort_params(char **tab, int size)
{
	int		i;
	int		n;
	char	*aux;

	i = 1;
	n = i + 1;
	while (i < size - 1)
	{
		if ((ft_strcmp(tab[i], tab[n]) > 0))
		{
			aux = tab[i];
			tab[i] = tab[n];
			tab[n] = aux;
			i = 1;
			n = i + 1;
		}
		else
		{
			i++;
			n++;
		}
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	int		i;
	char	**matrix;

	matrix = ft_sort_params(argv, argc);
	i = 1;
	while (i < argc)
	{
		putstr(matrix[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
