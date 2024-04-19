/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:15:48 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 13:30:57 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *str;

	str = (unsigned char *)s;
	i = 0;
	while (i++ < n)
	{
		if (*str == ((unsigned char)c))
			return (str);
		str++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char a[] = "123456789\0/0987654321";
// 	printf("-----memchr-----\n");
// 	printf("1  = %p\n", memchr(a, '1', 20));
// 	printf("5  = %p\n", memchr(a, '5', 20));
// 	printf("9  = %p\n", memchr(a, '9', 5));
// 	printf("0  = %p\n", memchr(a, '0', 20));
// 	printf("\\0 = %p\n", memchr(a, '\0', 20));
// 	printf("*  = %p\n", memchr(a, '*', 20));
// 	// printf("*  = %p\n", memchr(NULL, '*', 20));
// 	printf("-----ft_memchr-----\n");
// 	printf("1  = %p\n", ft_memchr(a, '1', 20));
// 	printf("5  = %p\n", ft_memchr(a, '5', 20));
// 	printf("9  = %p\n", ft_memchr(a, '9', 5));
// 	printf("0  = %p\n", ft_memchr(a, '0', 20));
// 	printf("\\0 = %p\n", ft_memchr(a, '\0', 20));
// 	printf("*  = %p\n", ft_memchr(a, '*', 20));
// 	// printf("*  = %p\n", ft_memchr(NULL, '*', 20));
// }