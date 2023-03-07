/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:07:55 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/09 11:15:12 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb);

float	ft_sqrt(int nb);

int main(void)
{	
	int n;
	
	n = 879863;
	printf("el numero es %d y es primo %d\n", n, ft_is_prime(n));
	n = 2147483647;
	printf("el numero es %d y es primo %d\n", n, ft_is_prime(n));
	n = 2;
	printf("el numero es %d y es primo %d\n", n, ft_is_prime(n));
	n = 3;
	printf("el numero es %d y es primo %d\n", n, ft_is_prime(n));
	n = 11;
	printf("el numero es %d y es primo %d\n", n, ft_is_prime(n));
	n = 24;
	printf("el numero es %d y es primo %d\n", n, ft_is_prime(n));
	n = -89;
	printf("el numero es %d y es primo %d\n", n, ft_is_prime(n));
	n = 0;
	printf("el numero es %d y es primo %d\n", n, ft_is_prime(n));
	n = 1;
   	printf("el numero es %d y es primo %d\n", n, ft_is_prime(n));
	n = 2100000017;
	printf("el numero es %d y es primo %d\n", n, ft_is_prime(n));
	return (0);
}
