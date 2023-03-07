/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:45:59 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/01 22:46:03 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *);

int	main(void)
{
	char	*src;
	int		f;

	src = "listAcreouehaquedadobien";
	f = ft_str_is_alpha(src);
	printf("%d", f);
	return (0);
}
