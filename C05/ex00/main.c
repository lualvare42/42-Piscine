/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:00:00 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/09 11:21:14 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int	main(void)
{	
	int n;

	n = -1;
	printf("el numero es %d y su factorial es %d\n", n, ft_iterative_factorial(n)); 
	n = 0;
	printf("el numero es %d y su factorial es %d\n", n, ft_iterative_factorial(n));
	n = 2;
	printf("el numero es %d y su factorial es %d\n", n, ft_iterative_factorial(n));
	n = 9;
	printf("el numero es %d y su factorial es %d\n", n, ft_iterative_factorial(n));
	n = 5;
	printf("el numero es %d y su factorial es %d\n", n, ft_iterative_factorial(n));
	n = 12;
	printf("el numero es %d y su factorial es %d\n", n, ft_iterative_factorial(n));
	return (0);
}
