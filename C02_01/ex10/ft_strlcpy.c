/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:33:27 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/02 10:14:39 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	i;

	n = 0;
	i = 0;
	while (src[n] != '\0')
	{
		n++;
		if (size != 0)
		{
			while ((src[i] != '\0') && (i < size - 1))
			{
				dest[i] = src[i];
				i++;
			}
		}
	}
	dest[i] = '\0';
	return (n);
}
