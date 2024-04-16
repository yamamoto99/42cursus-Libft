/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:44:37 by masayama          #+#    #+#             */
/*   Updated: 2024/04/16 21:08:29 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("0 = %d\n", ft_isdigit('1'));
// 	printf("9 = %d\n", ft_isdigit('1'));
// 	printf("a = %d\n", ft_isdigit('a'));
// 	printf("z = %d\n", ft_isdigit('z'));
// 	printf("A = %d\n", ft_isdigit('A'));
// 	printf("Z = %d\n", ft_isdigit('Z'));
// 	printf("* = %d\n", ft_isdigit('*'));
// }