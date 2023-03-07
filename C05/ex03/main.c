/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:27:53 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/09 11:32:46 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int	main(void)
{
	int nb;
	int power;

	nb = -4;
	power = 5;
	printf("numero es %d, potencia es %d. Resultado es %d\n", nb, power, ft_recursive_power(nb, power));
	nb = 0;
	power = 0;
	printf("numero es %d, potencia es %d. Resultado es %d\n", nb, power, ft_recursive_power(nb, power));
	nb = 7;
	power = 5;
	printf("numero es %d, potencia es %d. Resultado es %d\n", nb, power, ft_recursive_power(nb, power));
	nb = 25000;
	power = 0;
	printf("numero es %d, potencia es %d. Resultado es %d\n", nb, power, ft_recursive_power(nb, power));
	nb = 254658;
	power = 1;
	printf("numero es %d, potencia es %d. Resultado es %d\n", nb, power, ft_recursive_power(nb, power));
	return (0);
}
