/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:26:32 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 10:53:47 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*current;

	current = (char *)s;
	while (*current)
		current++;
	if ((char)c == '\0')
		return (current);
	while (current != (char *)s)
	{
		if (*current == (char)c)
			return (current);
		current--;
	}
	if (*current == (char)c)
		return (current);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char a[] = "1234567890987654321";
// 	printf("-----strrchr-----\n");
// 	printf("1  = %s\n", strrchr(a, '1'));
// 	printf("5  = %s\n", strrchr(a, '5'));
// 	printf("9  = %s\n", strrchr(a, '9'));
// 	printf("0  = %s\n", strrchr(a, '0'));
// 	printf("\\0 = %s\n", strrchr(a, '\0'));
// 	printf("* = %s\n", strrchr(a, '*'));
// 	printf("-----ft_strrchr-----\n");
// 	printf("1  = %s\n", ft_strrchr(a, '1'));
// 	printf("5  = %s\n", ft_strrchr(a, '5'));
// 	printf("9  = %s\n", ft_strrchr(a, '9'));
// 	printf("0  = %s\n", ft_strrchr(a, '0'));
// 	printf("\\0 = %s\n", ft_strrchr(a, '\0'));
// 	printf("* = %s\n", ft_strrchr(a, '*'));
// }