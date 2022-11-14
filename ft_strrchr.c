/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachebla <yachebla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:55:54 by yachebla          #+#    #+#             */
/*   Updated: 2022/11/12 19:31:04 by yachebla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int x)
{
	int	i;

	i = (int) ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)x)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
