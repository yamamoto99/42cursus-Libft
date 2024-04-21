/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:31:34 by masayama          #+#    #+#             */
/*   Updated: 2024/04/21 15:29:36 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_negative(int nbr)
{
	int	res;

	res = 0;
	if (nbr < 0)
		res = 1;
	return (res);
}

int	count_digits(long n)
{
	if (n <= 9)
		return (1);
	return (count_digits(n / 10) + 1);
}

void	number_into_array(char *res, long nbr, int negative_flag, int size)
{
	res[--size] = '\0';
	if (negative_flag)
	{
		while (size > 1)
		{
			res[--size] = nbr % 10 + '0';
			nbr /= 10;
		}
		size--;
	}
	while (size > 0)
	{
		res[--size] = nbr % 10 + '0';
		nbr /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		negative_flag;
	long	long_n;
	char	*res;
	int		size;

	long_n = (long)n;
	negative_flag = is_negative(n);
	if (negative_flag == 1)
		long_n *= -1;
	size = count_digits(long_n) + negative_flag + 1;
	res = (char *)malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	if (negative_flag == 1)
		res[0] = '-';
	number_into_array(res, long_n, negative_flag, size);
	return (res);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%s\n", ft_itoa(1));
// 	printf("%s\n", ft_itoa(1));
// 	printf("%s\n", ft_itoa(9));
// 	printf("%s\n", ft_itoa(9));
// 	printf("%s\n", ft_itoa(10));
// 	printf("%s\n", ft_itoa(10));
// 	printf("%s\n", ft_itoa(123));
// 	printf("%s\n", ft_itoa(-123));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(INT_MAX));
// 	printf("%s\n", ft_itoa(INT_MIN));
// }