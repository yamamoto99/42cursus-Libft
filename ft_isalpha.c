/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:17:18 by masayama          #+#    #+#             */
/*   Updated: 2024/04/16 20:28:17 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("1 = %d\n", ft_isalpha('1'));
// 	printf("a = %d\n", ft_isalpha('a'));
// 	printf("z = %d\n", ft_isalpha('z'));
// 	printf("A = %d\n", ft_isalpha('A'));
// 	printf("Z = %d\n", ft_isalpha('Z'));
// 	printf("* = %d\n", ft_isalpha('*'));
// }