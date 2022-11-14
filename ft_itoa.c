/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachebla <yachebla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:10:14 by yachebla          #+#    #+#             */
/*   Updated: 2022/11/13 16:11:08 by yachebla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	int		j;
	int		size;
	char	*s;
	long	n;

	n = nb;
	j = 0;
	if (n <= 0)
		if (!j++)
			n *= -1;
	size = ft_count(n) + j;
	s = malloc(sizeof(char) * (size) + 1);
	if (!s)
		return (NULL);
	if (n == 0)
		s[0] = '0';
	s[size--] = 0;
	while (size >= 0)
	{
		s[size--] = (n % 10) + '0';
		n /= 10;
	}
	if (j && nb != 0)
		s[0] = '-';
	return (s);
}
