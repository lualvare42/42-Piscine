/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:38:09 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/05 13:56:33 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int    ft_strncmp(char *, char *, unsigned int n);

int	main(void)
{
	char	*s1;
	char	*s2;
	int     x;
	int	(*f) (char *, char *, unsigned int n);
	unsigned int n;
	
	f = &ft_strncmp;
	n = 3;
	s1 = "a8c"; //caso 1 i > n;
	s2 = "a8cD";
	x = f(s1, s2, n);
	printf("mi funcion %d\n", x);
	printf("test 1 %d\n", strncmp(s1, s2, n));
	n = 3;
	s1 = "abc"; //caso 2 i == n ^ s1[i] > s2[n];
	s2 = "abcD";
	x = f(s1, s2, n);
	printf("mi funcion %d\n", x);
	printf("test 2 %d\n", strncmp(s1, s2, n));
	n = 7;
	s1 = "ABCas"; //caso 3 i == n ^ s1[i] == s2[n];
	s2 = "ABCasKO";
	x = f(s1, s2, n);
	printf("mi funcion %d\n", x);
	printf("test 3 %d\n", strncmp(s1, s2, n));
	n = 5;
	s1 = "abioahsoias"; //caso 4 i < n;
	s2 = "abioasijdn";
	x = f(s1, s2, n);
	printf("mi funcion %d\n", x);
	printf("test 4 %d\n", strncmp(s1, s2, n));
	n =1;
	s1 = "abC"; //caso 5 i == n ^ s1[i] < s2[n];
	s2 = "ABc";    
	x = f(s1, s2, n);
	printf("mi funcion %d\n", x);
	printf("test 5 %d\n", strncmp(s1, s2, n));
	n = 12;
	s1 = "aaaaaaaaaa9";
	s2 = "aaaaaaaaaa9";
	x = f(s1, s2, n);
	printf("mi funcion %d\n", x);
	printf("test 6 %d\n", strncmp(s1, s2, n));
	n = 2;
	s1 = "";
	s2 = "ABc";
	x = f(s1, s2, n);
	printf("mi funcion %d\n", x);
	printf("test 7 %d\n", strncmp(s1, s2, n));
	n = 7;
	s1 = "aaaaaaaaaaaaaa";
	s2 = "aaaaaazaaaaaaa";
	x = f(s1, s2, n);
	printf("mi funcion %d\n", x);
	printf("test 8 %d\n", strncmp(s1, s2, n));
	return (0);
}
