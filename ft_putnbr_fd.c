/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachebla <yachebla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:25:23 by yachebla          #+#    #+#             */
/*   Updated: 2022/11/13 18:00:40 by yachebla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n >= 0 && n < 10)
	{
		ft_putchar_fd(n + '0', fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		ft_putnbr_fd (n *(-1), fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
