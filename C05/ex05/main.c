/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:45:29 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/09 10:15:38 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb);

int	main(void)
{
	int n;

	n = -5;
	printf("el numero es %d y su raiz cuadrada es %d\n", n, ft_sqrt(n));
	n = 2147483647;
	printf("el numero es %d y su raiz cuadrada es %d\n", n, ft_sqrt(n));
	n = 144;
	printf("el numero es %d y su raiz cuadrada es %d\n", n, ft_sqrt(n));
	n = 169;
	printf("el numero es %d y su raiz cuadrada es %d\n", n, ft_sqrt(n));
	n = 21474836;
	printf("el numero es %d y su raiz cuadrada es %d", n, ft_sqrt(n));

}
