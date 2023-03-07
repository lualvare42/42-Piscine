/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:45:59 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/01 15:39:26 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *);

int	main(void)
{
	char	src[] = "AQUI LA RECUPERE ASI QUE XS";
	//char	(*f)(char *);
	
	//src = "listo creo que ha quedado bien";
	ft_strlowcase(&src[0]);
	printf("%s", src);
	return (0);
}
