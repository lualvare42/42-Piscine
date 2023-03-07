/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:25:27 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/06 18:01:39 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_leading(char *str) //cuenta numero de espacios y signos.
{
	int	s;
	int	n;
	int	aux;

	s = 1;
	n = 0;
	aux = 0;
	while (str[n] && (str[n] == ' '))
		n++;
	while (str[n] && (str[n] == '-' || str[n] == '+'))
	{
		if (str[n] == '-')
			s *= -1;
		n++;
	}
	n = n * s;
	printf("%d", n);
	return (n);
}

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
/*
void	ft_recursiva(long int nbr, char *base, int size)
{
	int	a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		ft_recursiva(nbr, base, size);
	}
	else if (nbr >= size)
	{
		a = nbr / size;
		a = nbr % size;
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
}*/
int	main3(void)
{
	ft_leading("   ---++--a");
	return (0);
}
