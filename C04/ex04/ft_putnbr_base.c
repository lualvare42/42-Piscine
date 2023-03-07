/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:25:27 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/07 13:20:03 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_check(char *base)
{
	int	n;

	n = 0;
	while (base[n])
		n++;
	return (n);
}

int	condition_check(char *base, int size)
{
	int	n;
	int	i;

	n = 0;
	while (base[n])
	{	
		if ((base [n] == '+') || (base[n] == '-'))
			return (0);
		i = n + 1;
		while (base[i])
		{
			if (base[n] == base[i])
				return (0);
			i++;
		}
		n++;
	}
	if (size <= 1)
		return (0);
	return (1);
}

void	ft_recursiva(long int nbr, char *base, int size)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		ft_recursiva(nbr, base, size);
	}
	else if (nbr >= size)
	{
		ft_recursiva(nbr / size, base, size);
		ft_recursiva(nbr % size, base, size);
	}
	else if (nbr < size)
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	x;

	size = base_check(base);
	x = condition_check(base, size);
	if (x == 0)
		write(1, "", 1);
	else
		ft_recursiva(nbr, base, size);
}

int	main(void)
{
	ft_putnbr_base(-21474, "01234567");
	return (0);
}
