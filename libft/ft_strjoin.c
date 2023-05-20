/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:29:21 by marvin            #+#    #+#             */
/*   Updated: 2022/11/04 16:22:33 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen (s1);
	len2 = ft_strlen (s2);
	str = malloc(len1 + len2 + 1);
	if (str != NULL)
	{
		ft_memmove(str, s1, len1);
		ft_memmove(str + len1, s2, len2);
		str [len1 + len2] = '\0';
	}
	return (str);
}
