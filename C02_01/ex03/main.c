/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:45:59 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/02 10:05:40 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *);

int	main(void)
{
	char	*src;
	int		f;

	src = "56:464651548561";
	f = ft_str_is_numeric(src);
	printf("%d", f);
	return (0);
}
