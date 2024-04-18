/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:31:03 by masayama          #+#    #+#             */
/*   Updated: 2024/04/18 22:59:45 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dst == NULL && src != NULL && dstsize == 0)
		return (src_len);
	index = 0;
	while (*src != 0 && ++index < dstsize)
		*dst++ = *src++;
	if (index != 1)
		*dst = 0;
	return (src_len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("-----strlcpy-----\n");
// 	char dst[10] = "000000000";
// 	char src[10] = "123456";
// 	printf("src size = %d\nreturn value = %lu\ncopy src to dst = %s\n", 7, strlcpy(dst, src, 0), dst);
// 	printf("src size = %d\nreturn value = %lu\ncopy src to dst = %s\n", 7, strlcpy(dst, src, 5), dst);
// 	strlcpy(NULL, "DW", 0);
// 	// strlcpy("DW", NULL, 0);
// 	// strlcpy(NULL, NULL, 0);
// 	printf("-----ft_strlcpy-----\n");
// 	char ft_dst[10] = "000000000";
// 	char ft_src[10] = "123456";
// 	printf("src size = %d\nreturn value = %lu\ncopy src to dst = %s\n", 7, ft_strlcpy(ft_dst, ft_src, 0), ft_dst);
// 	printf("src size = %d\nreturn value = %lu\ncopy src to dst = %s\n", 7, ft_strlcpy(ft_dst, ft_src, 5), ft_dst);
// 	ft_strlcpy(NULL, "DW", 0);
// 	// ft_strlcpy("DW", NULL, 0);
// 	// ft_strlcpy(NULL, NULL, 0);
// }