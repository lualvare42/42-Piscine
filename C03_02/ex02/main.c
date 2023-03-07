/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:38:09 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/02 16:23:59 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    ft_strcat(char *, char *);

int	main(void)
{
	char	src[] = " el que lo lea";
	char	dest[] = "OJO";
	//int     x;
	char	(*f) (char *, char *);
	//unsigned int	n;
	
	f = &ft_strcat;
	//dest = "abcCa"; //caso 1 i > n;
	//src = "abcCA";
	f(dest, src);
	printf("%s\n", dest);
	return (0);
}
