/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:33:36 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 09:35:11 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}


// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
// 	printf("-----tolower-----\n");
// 	printf("A = %c\n", tolower('A'));
// 	printf("Z = %c\n", tolower('Z'));
// 	printf("a = %c\n", tolower('a'));
// 	printf("z = %c\n", tolower('z'));
// 	printf("* = %c\n", tolower('*'));
// 	printf("-----ft_tolower-----\n");
// 	printf("A = %c\n", ft_tolower('A'));
// 	printf("Z = %c\n", ft_tolower('Z'));
// 	printf("a = %c\n", ft_tolower('a'));
// 	printf("z = %c\n", ft_tolower('z'));
// 	printf("* = %c\n", ft_tolower('*'));
// }