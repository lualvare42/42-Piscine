/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:45:59 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/02 10:00:11 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strncpy(char *, char *, unsigned int n);

int	main(void)
{
	char	*src;
	char	dest[25];
	char	(*f)(char *, char *, unsigned int);
	unsigned int	n;
	unsigned int	x;
	int				a;

	src = "Hola mi bumby";
	n = 16;
	f = &ft_strncpy;
	f(dest, src, n);
	printf("%s", dest);
	x = 13;
	a = 0;
	while (*dest == '\0' && (x < n))
	{
		printf("%d", a);
		x++;
	}
	return (0);
}
