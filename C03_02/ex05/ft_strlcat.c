/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:25:25 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/03 20:37:11 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0' && (n < size))
	{
		dest[n + i] = src[n];
		n++;
	}
	dest[n + i] = '\0';
	while (src[n])
		n++;
	return (n + i);
}
