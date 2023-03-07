/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:38:09 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/03 20:45:14 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *, char *, unsigned int n);

int	main(void)
{
//	char	src[] = " el que lo lea";
//	char	dest[] = "OJO";
	char    src2[] = " el que lo lea";
	char    dest2[] = "OJO";
	//int     x ;
	unsigned int	(*f) (char *, char *, unsigned int n);
//	unsigned int	n;
	unsigned long	j;
	unsigned int	i;
	
//	n = 0;
	i = 10;
	f = &ft_strlcat;
	//dest = "abcCa"; //caso 1 i > n;
	//src = "abcCA";
	//f(dest, src, n);
	//printf("%s\n", dest);
//	printf("%d\n", f(dest, src, n));
//	printf("%s\n", dest);
	j = strlcat(dest2, src2, i);
	printf("%lu\n", j);

	return (0);
}
