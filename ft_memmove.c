/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachebla <yachebla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:50:52 by yachebla          #+#    #+#             */
/*   Updated: 2022/11/07 17:38:48 by yachebla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (!src && !dst)
		return (NULL);
	if (dst > src)
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	else
		while (++i < len)
			(((char *)dst)[i] = ((char *)src)[i]);
	return (dst);
}
