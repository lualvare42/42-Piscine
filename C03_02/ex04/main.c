/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:38:09 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/09 17:20:56 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strstr(char *, char *);

int	main(void)
{
	char	str[] = " el que lo lea";
	char	to_find[] = "obe";
	//int     x;
	//char	(*f) (char *, char *);
	//unsigned int	nb;
	//char	ptr;
	
	//nb = 10;
	//f = &ft_strstr;
	//dest = "abcCa"; //caso 1 i > n;
	//src = "abcCA";
	//f(str, to_find);
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
