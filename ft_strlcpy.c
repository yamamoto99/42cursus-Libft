/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:53:51 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 10:44:04 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != 0)
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	index;
	int	src_len;

	src_len = ft_strlen(src);
	index = (int)size;
	while (*src != 0 && --index > 0)
		*dest++ = *src++;
	*dest = 0;
	return (src_len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char dest[10] = "000000000";
// 	char src[10] = "123456";
// 	printf("src size : %d\ncopy src to dest : %s\n",);
// }