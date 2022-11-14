/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachebla <yachebla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:31:35 by yachebla          #+#    #+#             */
/*   Updated: 2022/11/13 21:18:33 by yachebla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_words(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[i] != c)
		j++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0' )
			j++;
		i++;
	}
	return (j);
}

static	int	ft_lenstr(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static	char	**ft_free(char **tab, int j)
{
	int	i;

	i = 0;
	while (i <= j)
	{
		free (tab[i]);
		i++;
	}
	free (tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	j = 0;
	if (!tab)
		return (NULL);
	while (s[i] != '\0' && j < ft_count_words(s, c))
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			tab[j] = ft_substr(&s[i], 0, ft_lenstr(&s[i], c));
			if (!tab[j++])
				return (ft_free(tab, j));
			i += ft_lenstr(&s[i], c);
		}
	}
	tab[j] = NULL;
	return (tab);
}
