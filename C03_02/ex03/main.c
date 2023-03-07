/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:38:09 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/03 19:57:54 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    ft_strncat(char *, char *, unsigned int nb);

int	main(void)
{
	char	src[] = " el que lo lea";
	char	dest[] = "OJO";
	//int     x;
	char	(*f) (char *, char *, unsigned int nb);
	unsigned int	nb;
	
	nb = 6;
	f = &ft_strncat;
	//dest = "abcCa"; //caso 1 i > n;
	//src = "abcCA";
	f(dest, src, nb);
	printf("mia %s\n", dest);
	strncmp(dest, src, nb);
	printf("funcion %s\n", dest);
	return (0);
}
