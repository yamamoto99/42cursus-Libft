/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:53:40 by masayama          #+#    #+#             */
/*   Updated: 2024/04/18 22:20:41 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	count;
	size_t	index;

	src_len = ft_strlen(src);
	if (dst == NULL && src != NULL)
		return (src_len);
	dst_len = ft_strlen(dst);
	count = dst_len;
	index = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (count < dstsize - 1)
		dst[count++] = src[index++];
	if (count == dstsize - 1)
		dst[count] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	printf("-----strlcat-----\n");
// 	char a[20] = "ABCDE";
// 	char b[] = "1234";
// 	printf("%lu\n%s\n", strlcat(a, b, 13), a);
// 	printf("%lu\n\n", strlcat(NULL, "FE", 0));
// 	// strlcat("FE", NULL, 0);
// 	// strlcat(NULL, NULL, 0);
// 	printf("-----ft_strlcat-----\n");
// 	char c[20] = "ABCDE";
// 	char d[] = "1234";
// 	printf("%lu\n%s\n", ft_strlcat(c, d, 13), c);
// 	printf("%lu\n\n", ft_strlcat(NULL, "FE", 0));
// 	// ft_strlcat("FE", NULL, 0);
// 	// ft_strlcat(NULL, NULL, 0);
// }