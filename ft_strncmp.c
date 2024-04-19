/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:30:37 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 12:08:27 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
		if (s1[i] == 0 && s2[i] == 0)
			return (0);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char a[] = "Hello";
// 	char b[] = "Hello World";
// 	char c[] = "Hollo";
// 	char d[] = "";
// 	printf("-----strncmp-----\n");
// 	printf("[Hello] : [Hello World]\nsize = 5\nres = %d\n", strncmp(a, b, 5));
// 	printf("[Hello] : [Hello World]\nsize = 6\nres = %d\n", strncmp(a, b, 6));
// 	printf("[Hello] : [Hollo]\nsize = 5\nres = %d\n", strncmp(a, c, 5));
// 	printf("[Hello] : []\nsize = 5\nres = %d\n", strncmp(a, d, 5));
// 	printf("[] : [Hello]\nsize = 5\nres = %d\n", strncmp(d, a, 5));
// 	printf("[] : []\nsize = 5\nres = %d\n", strncmp(d, d, 5));
// 	// printf("[Hello] : NULL\nsize = 5\nres = %d\n", strncmp(a, NULL, 5));
// 	// printf("NULL : [Hello]\nsize = 5\nres = %d\n", strncmp(NULL, a, 5));
// 	printf("NULL : NULL\nsize = 0\nres = %d\n", strncmp(NULL, NULL, 0));
// 	printf("-----ft_strncmp-----\n");
// 	printf("[Hello] : [Hello World]\nsize = 5\nres = %d\n", ft_strncmp(a, b,
// 			5));
// 	printf("[Hello] : [Hello World]\nsize = 6\nres = %d\n", ft_strncmp(a, b,
// 			6));
// 	printf("[Hello] : [Hollo]\nsize = 5\nres = %d\n", ft_strncmp(a, c, 5));
// 	printf("[Hello] : []\nsize = 5\nres = %d\n", ft_strncmp(a, d, 5));
// 	printf("[] : [Hello]\nsize = 5\nres = %d\n", ft_strncmp(d, a, 5));
// 	printf("[] : []\nsize = 5\nres = %d\n", ft_strncmp(d, d, 5));
// 	// printf("[Hello] : NULL\nsize = 5\nres = %d\n", ft_strncmp(a, NULL, 5));
// 	// printf("NULL : [Hello]\nsize = 5\nres = %d\n", ft_strncmp(NULL, a, 5));
// 	printf("NULL : NULL\nsize = 0\nres = %d\n", ft_strncmp(NULL, NULL, 0));
// }