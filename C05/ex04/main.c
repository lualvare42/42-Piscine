/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:54:21 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/09 12:00:58 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index);

int	main(void)
{
	int	n;

	n = 3;
	printf("el numero de Fibonacci en la posicion %d es %d\n", n, ft_fibonacci(n));
	n = 42;
	printf("el numero de Fibonacci en la posicion %d es %d\n", n, ft_fibonacci(n));
	n = 0;
	printf("el numero de Fibonacci en la posicion %d es %d\n", n, ft_fibonacci(n));
	n = -50;
	printf("el numero de Fibonacci en la posicion %d es %d\n", n, ft_fibonacci(n));
	n = 12;
	printf("el numero de Fibonacci en la posicion %d es %d\n", n, ft_fibonacci(n));
	n = 1;
	printf("el numero de Fibonacci en la posicion %d es %d\n", n, ft_fibonacci(n));
	n = 2;
	printf("el numero de Fibonacci en la posicion %d es %d\n", n, ft_fibonacci(n));
	n = 16;
	printf("el numero de Fibonacci en la posicion %d es %d\n", n, ft_fibonacci(n));
	return (0);
}
