/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:39:50 by masayama          #+#    #+#             */
/*   Updated: 2024/04/27 16:55:51 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_putnbr_helper(long nb, int fd)
{
	long	tmp;

	if (nb < 10)
	{
		nb += 48;
		ft_putchar_fd(nb, fd);
		return ;
	}
	tmp = nb % 10 + 48;
	nb = nb / 10;
	ft_putnbr_helper(nb, fd);
	ft_putchar_fd(tmp, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = (long)n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = nbr * -1;
	}
	ft_putnbr_helper(nbr, fd);
}
