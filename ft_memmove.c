/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:29:41 by masayama          #+#    #+#             */
/*   Updated: 2024/04/18 13:43:48 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (dst);
	if (dst <= src)
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (0 < len)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	printf("-----memmove-----\n");
// 	char memmove_a[] = "0000000000";
// 	// char memmove_b[] = "1111111111";
// 	memmove(NULL, NULL, 5);
// 	printf("dst = 0000000000\nsrc = 1111111111\nsize = 3\nres = %s\n",
// 		memmove_a);
// 	printf("-----ft_memmove-----\n");
// 	char ft_memmove_a[] = "0000000000";
// 	// char ft_memmove_b[] = "1111111111";
// 	ft_memmove(NULL, NULL, 5);
// 	printf("dst = 0000000000\nsrc = 1111111111\nsize = 3\nres = %s\n",
// 		ft_memmove_a);
// }