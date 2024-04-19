/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:15:48 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 13:05:08 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while ((unsigned char *)s && i++ < n)
	{
		if (*((unsigned char *)s) == ((unsigned char)c))
			return ((unsigned char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((unsigned char *)s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char a[] = "1234567890987654321";
// 	printf("-----memchr-----\n");
// 	printf("1  = %s\n", (char*)memchr(a, '1', 20));
// 	printf("5  = %s\n", (char*)memchr(a, '5', 20));
// 	printf("9  = %s\n", (char*)memchr(a, '9', 5));
// 	printf("0  = %s\n", (char*)memchr(a, '0', 20));
// 	printf("\\0 = %s\n", (char*)memchr(a, '\0', 20));
// 	printf("*  = %s\n", (char*)memchr(a, '*', 20));
// 	printf("-----ft_memchr-----\n");
// 	printf("1  = %s\n", (char*)ft_memchr(a, '1', 20));
// 	printf("5  = %s\n", (char*)ft_memchr(a, '5', 20));
// 	printf("9  = %s\n", (char*)ft_memchr(a, '9', 5));
// 	printf("0  = %s\n", (char*)ft_memchr(a, '0', 20));
// 	printf("\\0 = %s\n", (char*)ft_memchr(a, '\0', 20));
// 	printf("*  = %s\n", (char*)ft_memchr(a, '*', 20));
// }