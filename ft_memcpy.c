/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:17:51 by masayama          #+#    #+#             */
/*   Updated: 2024/04/18 20:54:37 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (dst);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	printf("-----memcpy-----\n");
// 	char memcpy_a[] = "0000000000";
// 	char memcpy_b[] = "1111111111";
// 	memcpy(memcpy_a, memcpy_b, 0);
// 	printf("dst = 0000000000\nsrc = 1111111111\nsize = 3\nres = %s\n",
// 		memcpy_a);
// 	printf("-----ft_memcpy-----\n");
// 	char ft_memcpy_a[] = "0000000000";
// 	char ft_memcpy_b[] = "1111111111";
// 	memcpy(ft_memcpy_a, ft_memcpy_b, 0);
// 	printf("dst = 0000000000\nsrc = 1111111111\nsize = 3\nres = %s\n",
// 		ft_memcpy_a);
// }