/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:44:48 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 10:53:35 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char a[] = "1234567890987654321";
// 	printf("-----strchr-----\n");
// 	printf("1  = %s\n", strchr(a, '1'));
// 	printf("5  = %s\n", strchr(a, '5'));
// 	printf("9  = %s\n", strchr(a, '9'));
// 	printf("0  = %s\n", strchr(a, '0'));
// 	printf("\\0 = %s\n", strchr(a, '\0'));
// 	printf("*  = %s\n", strchr(a, '*'));
// 	printf("-----ft_strchr-----\n");
// 	printf("1  = %s\n", ft_strchr(a, '1'));
// 	printf("5  = %s\n", ft_strchr(a, '5'));
// 	printf("9  = %s\n", ft_strchr(a, '9'));
// 	printf("0  = %s\n", ft_strchr(a, '0'));
// 	printf("\\0 = %s\n", ft_strchr(a, '\0'));
// 	printf("*  = %s\n", ft_strchr(a, '*'));
// }