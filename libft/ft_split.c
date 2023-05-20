/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:59:21 by marvin            #+#    #+#             */
/*   Updated: 2022/11/19 17:31:02 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcounter(const char *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i] != c && str[i] != '\0')
			count += 1;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	old_i;

	i = 0;
	j = 0;
	split = malloc(sizeof(char *) * (ft_strcounter(s, c) + 1));
	if (!s || !split)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (!s[i])
			break ;
		old_i = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		split[j] = ft_substr(s, old_i, i - old_i);
		j++;
	}
	split[j] = NULL;
	return (split);
}
