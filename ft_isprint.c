/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:20:21 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 23:39:52 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("-----isprint-----\n");
// 	printf("9   = %d\n", isprint(9));
// 	printf("31  = %d\n", isprint(31));
// 	printf("32  = %d\n", isprint(32));
// 	printf("126 = %d\n", isprint(126));
// 	printf("127 = %d\n", isprint(127));
// 	printf("-----ft_isprint-----\n");
// 	printf("9   = %d\n", ft_isprint(9));
// 	printf("31  = %d\n", ft_isprint(31));
// 	printf("32  = %d\n", ft_isprint(32));
// 	printf("126 = %d\n", ft_isprint(126));
// 	printf("127 = %d\n", ft_isprint(127));
// }