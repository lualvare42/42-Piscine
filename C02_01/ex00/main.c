/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:45:59 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/01 08:34:43 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strcpy(char *, char *);

int	main(void)
{
	char	*src;
		char	dest[25];
	char	(*f)(char *, char *);

	src = "Hola mi bumby";
	f = &ft_strcpy;
	f(dest, src);
	printf("%s", dest);
	return (0);
}
