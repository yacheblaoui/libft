/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachebla <yachebla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:29:31 by yachebla          #+#    #+#             */
/*   Updated: 2022/11/07 16:37:37 by yachebla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count >= 2147483647 || size >= 2147483647)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, count * size);
	return (ptr);
}
