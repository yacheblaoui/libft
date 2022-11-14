/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachebla <yachebla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:05:46 by yachebla          #+#    #+#             */
/*   Updated: 2022/11/12 19:08:13 by yachebla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	if (start >= (unsigned int)ft_strlen((char *)s))
	{
		*sub = '\0';
		return (sub);
	}
	while (i < len && s[start] != '\0')
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
