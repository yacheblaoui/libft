/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachebla <yachebla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:41:16 by yachebla          #+#    #+#             */
/*   Updated: 2022/11/12 19:26:03 by yachebla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trim;
	int		k;

	i = 0;
	k = 0;
	if (!s1)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) -1;
	while (s1[i] && j >= 0 && ft_strchr(set, s1[j]))
		j--;
	trim = (char *)malloc(sizeof(char) * j - i + 2);
	if (!trim)
		return (NULL);
	while (i <= j)
		trim[k++] = s1[i++];
	trim[k] = '\0';
	return (trim);
}
