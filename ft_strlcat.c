/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachebla <yachebla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:55:23 by yachebla          #+#    #+#             */
/*   Updated: 2022/11/14 13:33:48 by yachebla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t x)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!dst && x == 0)
		return (ft_strlen (src));
	j = ft_strlen(dst);
	if (x <= ft_strlen(dst))
		return (x + ft_strlen(src));
	while (src[i] != '\0' && j < x - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
// int main()
// {
// 	char dest[] = "bfbdhj";
// 	// char dest2[] = "bfbdhjf";
// 	// printf("%zu\n", ft_strlcat(NULL, dest, 0));
// 	printf("%zu\n", strlcat(NULL, dest, 0));
// 	return 0;
// }