/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:26:44 by masayama          #+#    #+#             */
/*   Updated: 2024/04/27 16:56:51 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strcpy_clone(char *dest, char *src)
{
	char	*dest_head;

	dest_head = dest;
	while (*src != 0)
		*dest++ = *src++;
	*dest = 0;
	return (dest_head);
}

char	*ft_strdup(const char *s1)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * (int)ft_strlen(s1) + 1);
	if (res == NULL)
		return (NULL);
	return (ft_strcpy_clone(res, (char *)s1));
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	a[10] = "123456789";
// 	printf("-----strdup-----\n");
// 	printf("a         = %s\n", a);
// 	printf("a_point   = %p\n", a);
// 	printf("dup       = %s\n", strdup(a));
// 	printf("dup_point = %p\n", strdup(a));
// 	printf("-----ft_strdup-----\n");
// 	printf("a         = %s\n", a);
// 	printf("a_point   = %p\n", a);
// 	printf("dup       = %s\n", ft_strdup(a));
// 	printf("dup_point = %p\n", ft_strdup(a));
// }