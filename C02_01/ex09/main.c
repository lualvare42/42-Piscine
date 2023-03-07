/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:45:59 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/01 20:43:22 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *);

int	main(void)
{
	char	src[] = "A veces +megustan 42poke -lOS Kara+okes y ? comer 1poke bU-mBY";
	//char	(*f)(char *);
	
	//src = "listo creo que ha quedado bien";
	ft_strcapitalize(&src[0]);
	printf("%s", src);
	return (0);
}
