/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:45:59 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/05 11:31:24 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *, char *, unsigned int size);

int	main(void)
{
	char			*src;
	char			dest[18];
	unsigned int			(*f)(char *, char *, unsigned int);
	unsigned int	size;
	unsigned int	x;

	src = "Esto es una prueba";
	f = &ft_strlcpy;
	size = 19;
	f(dest, src, size);
	printf("%s\n", dest);
	x = f(dest, src, size);
	printf("%d\n", x);
	return (0);
}
