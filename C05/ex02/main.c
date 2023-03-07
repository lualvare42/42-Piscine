/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:27:53 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/09 11:30:25 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int	main(void)
{
	int nb;
	int power;

	nb = -2;
	power = 1;
	printf("numero es %d, potencia es %d. Resultado es %d\n", nb, power, ft_iterative_power(nb, power));
	nb = 5;
	power = 7;
	printf("numero es %d, potencia es %d. Resultado es %d\n", nb, power, ft_iterative_power(nb, power));
	nb = 0;
	power = 0;
	printf("numero es %d, potencia es %d. Resultado es %d\n", nb, power, ft_iterative_power(nb, power));
	nb = 4;
	power = 6;
	printf("numero es %d, potencia es %d. Resultado es %d\n", nb, power, ft_iterative_power(nb, power));
	nb = 250000;
	power = 0;
	printf("numero es %d, potencia es %d. Resultado es %d\n", nb, power, ft_iterative_power(nb, power));
	return (0);
}
