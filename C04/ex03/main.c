/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:26:17 by lualvare          #+#    #+#             */
/*   Updated: 2022/12/01 08:45:49 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *);

int	main(void)
{
	printf("%d mia\n", ft_atoi("	+---47483648"));
	printf("%d original", atoi("    --47483648"));
	return (0);
}
