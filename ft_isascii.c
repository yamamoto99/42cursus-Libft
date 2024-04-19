/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:35:24 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 22:33:35 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
// 	printf("-----isascii-----\n");
// 	printf("-1  = %d\n", isascii(-1));
// 	printf("0   = %d\n", isascii(0));
// 	printf("1   = %d\n", isascii(1));
// 	printf("127 = %d\n", isascii(127));
// 	printf("128 = %d\n", isascii(128));
// 	printf("-----ft_isascii-----\n");
// 	printf("-1  = %d\n", ft_isascii(-1));
// 	printf("0   = %d\n", ft_isascii(0));
// 	printf("1   = %d\n", ft_isascii(1));
// 	printf("127 = %d\n", ft_isascii(127));
// 	printf("128 = %d\n", ft_isascii(128));
// }
