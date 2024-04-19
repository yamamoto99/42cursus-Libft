/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:37:59 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 13:53:14 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_str;
	unsigned char	*s2_str;

	s1_str = (unsigned char *)s1;
	s2_str = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_str[i] != s2_str[i])
			return (s1_str[i] - s2_str[i]);
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
// 	printf("-----memcmp-----\n");
// 	printf("[Hello] : [Hello World]\nsize = 5\nres = %d\n", memcmp(a, b, 5));
// 	printf("[Hello] : [Hello World]\nsize = 6\nres = %d\n", memcmp(a, b, 6));
// 	printf("[Hello] : [Hollo]\nsize = 5\nres = %d\n", memcmp(a, c, 5));
// 	printf("[Hello] : []\nsize = 5\nres = %d\n", memcmp(a, d, 5));
// 	printf("[] : [Hello]\nsize = 5\nres = %d\n", memcmp(d, a, 5));
// 	printf("[] : []\nsize = 5\nres = %d\n", memcmp(d, d, 5));
// 	// printf("[Hello] : NULL\nsize = 5\nres = %d\n", memcmp(a, NULL, 5));
// 	// printf("NULL : [Hello]\nsize = 5\nres = %d\n", memcmp(NULL, a, 5));
// 	printf("NULL : NULL\nsize = 0\nres = %d\n", memcmp(NULL, NULL, 0));
// 	printf("-----ft_memcmp-----\n");
// 	printf("[Hello] : [Hello World]\nsize = 5\nres = %d\n", ft_memcmp(a, b,
// 			5));
// 	printf("[Hello] : [Hello World]\nsize = 6\nres = %d\n", ft_memcmp(a, b,
// 			6));
// 	printf("[Hello] : [Hollo]\nsize = 5\nres = %d\n", ft_memcmp(a, c, 5));
// 	printf("[Hello] : []\nsize = 5\nres = %d\n", ft_memcmp(a, d, 5));
// 	printf("[] : [Hello]\nsize = 5\nres = %d\n", ft_memcmp(d, a, 5));
// 	printf("[] : []\nsize = 5\nres = %d\n", ft_memcmp(d, d, 5));
// 	// printf("[Hello] : NULL\nsize = 5\nres = %d\n", ft_memcmp(a, NULL, 5));
// 	// printf("NULL : [Hello]\nsize = 5\nres = %d\n", ft_memcmp(NULL, a, 5));
// 	printf("NULL : NULL\nsize = 0\nres = %d\n", ft_memcmp(NULL, NULL, 0));
// }