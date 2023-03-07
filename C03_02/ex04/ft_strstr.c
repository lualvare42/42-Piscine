/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:25:25 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/03 11:13:50 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{	
	int	n;
	int	i;

	n = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[n] != 0)
	{		
		i = 0;
		while ((str[n + i] == to_find[i]) && (str[n + i] != '\0'))
		{
			i++;
			if (to_find[i] == '\0')
				return (&(*(str + n)));
		}
		n++;
	}
	return (0);
}
