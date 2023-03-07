/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualvare <lualvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:38:09 by lualvare          #+#    #+#             */
/*   Updated: 2022/11/03 17:23:13 by lualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *, char *);

int	main(void)
{
	char	*s1;
	char	*s2;
	int     x;
	int	(*f) (char *, char *);
	
	f = &ft_strcmp;
	s1 = "abcC"; //caso 1 i > n;
	s2 = "abc";
	x = f(s1, s2);
	printf("primer caso %d\n", x);
	printf("test 1 %d\n", strcmp(s1, s2));
	s1 = "abcamoaskja"; //caso 2 i == n ^ s1[i] > s2[n];
	s2 = "abc";
	x = f(s1, s2);
	printf("%d\n", x);
	printf("test 2 %d\n", strcmp(s1, s2));
	s1 = "ABC"; //caso 3 i == n ^ s1[i] == s2[n];
	s2 = "ABC";
	x = f(s1, s2);
	printf("%d\n", x);
	printf("test 3 %d\n", strcmp(s1, s2));
	s1 = "ab"; //caso 4 i < n;
	s2 = "ABC";
	x = f(s1, s2);
	printf("%d\n", x);
	printf("test 4 %d\n", strcmp(s1, s2));
	s1 = "abC"; //caso 5 i == n ^ s1[i] < s2[n];
	s2 = "ABc";    
	x = f(s1, s2);
	printf("%d\n", x);
	printf("test 5 %d\n", strcmp(s1, s2));
	s1 = "acfWrt";
	s2 = "Basijq";
	x = f(s1, s2);
	printf("%d\n", x);
	printf("test 6 %d\n", strcmp(s1, s2));
	s1 = "";
	s2 = "ABc";
	x = f(s1, s2);
	printf("%d\n", x);
	printf("test 7 %d\n", strcmp(s1, s2));
	s1 = "aaaaaaaaaaaaaa";
	s2 = "aaaaaazaaaaaaa";
	x = f(s1, s2);
	printf("%d\n", x);
	printf("test 8 %d\n", strcmp(s1, s2));
	return (0);
}
