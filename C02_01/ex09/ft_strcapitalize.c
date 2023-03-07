/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:33:27 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/01 17:02:13 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_previous(char p)
{
	if ((p >= 65 && p <= 90) || (p >= 97 && p <= 122))
		return (0);
	else if (p >= 48 && p <= 57)
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		n;
	char	a;
	char	b;

	n = 0;
	while (str[n] != '\0')
	{
		a = str[n];
		b = str[n - 1];
		if ((a >= 97) && (a <= 122) && (check_previous(b) == 1))
			str[n] = str[n] - 32;
		else if ((a >= 65) && (a <= 90) && (check_previous(b) == 0))
			str[n] = str[n] + 32;
		n++;
	}
	return (str);
}
