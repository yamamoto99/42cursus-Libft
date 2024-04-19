/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:04:49 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 20:10:18 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_len;

	if (haystack == NULL && needle == NULL)
		return (NULL);
	if (len != 0 && *haystack == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	if (needle_len > len)
		return (NULL);
	while (*haystack && len-- >= needle_len)
	{
		if(ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char a[] = "abcdefghijklm";
// 	char b[] = "klm";
// 	char c[] = "def";
// 	char d[] = "000";
// 	char e[] = "";
// 	printf("----strnstr----\n");
// 	printf("%s\n", strnstr(a, b, 14));
// 	printf("%s\n", strnstr(a, b, 0));
// 	printf("%s\n", strnstr(a, b, 5));
// 	printf("%s\n", strnstr(a, b, 12));
// 	printf("%s\n", strnstr(b, a, 12));
// 	printf("%s\n", strnstr(a, a, 11));
// 	printf("%s\n", strnstr(a, a, 12));
// 	printf("%s\n", strnstr(a, c, 14));
// 	printf("%s\n", strnstr(a, d, 14));
// 	printf("%s\n", strnstr(a, e, 14));
// 	printf("%s\n", strnstr(e, d, 14));
// 	printf("%s\n", strnstr(NULL, b, 0));
// 	// printf("%s\n", strnstr(a, NULL, 0));
// 	// printf("%s\n", strnstr(NULL, NULL, 0));
// 	printf("----ft_strnstr----\n");
// 	printf("%s\n", ft_strnstr(a, b, 14));
// 	printf("%s\n", ft_strnstr(a, b, 0));
// 	printf("%s\n", ft_strnstr(a, b, 5));
// 	printf("%s\n", ft_strnstr(a, b, 12));
// 	printf("%s\n", ft_strnstr(b, a, 12));
// 	printf("%s\n", ft_strnstr(a, a, 11));
// 	printf("%s\n", ft_strnstr(a, a, 12));
// 	printf("%s\n", ft_strnstr(a, c, 14));
// 	printf("%s\n", ft_strnstr(a, d, 14));
// 	printf("%s\n", ft_strnstr(a, e, 14));
// 	printf("%s\n", ft_strnstr(e, d, 14));
// 	printf("%s\n", ft_strnstr(NULL, b, 0));
// 	// printf("%s\n", ft_strnstr(a, NULL, 0));
// 	// printf("%s\n", ft_strnstr(NULL, NULL, 0));
// }