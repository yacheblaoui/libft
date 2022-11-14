/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachebla <yachebla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:55:47 by yachebla          #+#    #+#             */
/*   Updated: 2022/11/12 19:44:48 by yachebla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t x)
{
	unsigned int	i;

	i = 0;
	if (x == i)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < x - 1)
		i++;
	return ((unsigned char )s1[i] - (unsigned char )s2[i]);
}
