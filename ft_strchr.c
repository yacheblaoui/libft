/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachebla <yachebla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:55:17 by yachebla          #+#    #+#             */
/*   Updated: 2022/11/13 16:07:29 by yachebla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int x)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)x)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)x)
		return ((char *)&s[i]);
	return (NULL);
}
