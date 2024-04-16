/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:07:10 by masayama          #+#    #+#             */
/*   Updated: 2024/03/15 09:08:42 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != 0)
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_head;

	dest_head = dest;
	while (*src != 0)
		*dest++ = *src++;
	*dest = 0;
	return (dest_head);
}

char	*ft_strdup(char *src)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (res == NULL)
		return (NULL);
	return (ft_strcpy(res, src));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	a[10] = "123456789";
// 	printf("%s\n", ft_strdup(a));
// }