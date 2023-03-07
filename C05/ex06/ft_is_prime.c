/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:54:02 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/09 11:11:10 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	ft_abs(float y)
{
	if (y < 0)
		y = -y;
	return (y);
}

float	ft_sqrt(int nb)
{
	float	r;
	double	x;
	double	aux;

	r = 0.1;
	x = nb;
	aux = nb;
	while (ft_abs(x * x - aux) >= r)
	{
		x = ((aux / x) + x) / 2.0;
	}
	return (x);
}

int	ft_is_prime(int nb)
{
	int			x;

	if (nb == 2)
		return (1);
	else if (nb % 2 == 0 || nb < 2)
		return (0);
	x = 3;
	while ((x) < (ft_sqrt(nb)))
	{
		if ((nb % (x)) == 0)
			return (0);
		x += 2;
	}
	return (1);
}
