/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:45:59 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/01 12:26:14 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *);

int	main(void)
{
	char	*src;
	int		f;

	src = "listocreoquehaquedadobien";
	f = ft_str_is_lowercase(src);
	printf("%d", f);
	return (0);
}
