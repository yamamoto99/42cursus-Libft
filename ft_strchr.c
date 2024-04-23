/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:44:48 by masayama          #+#    #+#             */
/*   Updated: 2024/04/23 00:27:14 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (const char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == 0)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char a[] = "teste";
// 	printf("1  = %p\n", a);
// 	printf("-----strchr-----\n");
// 	printf("1  = %s\n", strchr(a, '1'));
// 	printf("5  = %s\n", strchr(a, '5'));
// 	printf("9  = %s\n", strchr(a, '9'));
// 	printf("0  = %s\n", strchr(a, '0'));
// 	printf("\\0 = %p\n", strchr(a, '\0'));
// 	printf("*  = %s\n", strchr(a, '*'));
// 	printf("-----ft_strchr-----\n");
// 	printf("1  = %s\n", ft_strchr(a, '1'));
// 	printf("5  = %s\n", ft_strchr(a, '5'));
// 	printf("9  = %s\n", ft_strchr(a, '9'));
// 	printf("0  = %s\n", ft_strchr(a, '0'));
// 	printf("\\0 = %p\n", ft_strchr(a, '\0'));
// 	printf("*  = %s\n", ft_strchr(a, '*'));
// }