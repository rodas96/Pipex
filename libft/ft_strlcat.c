/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:40:56 by rmorais           #+#    #+#             */
/*   Updated: 2022/11/04 16:29:06 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(dst);
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size <= j)
		return (size + ft_strlen(src));
	while (src[i] && (j + i) < (size - 1))
	{
		dst[j + i] = src[i];
		i++;
	}
	dst [j + i] = '\0';
	return (ft_strlen(src)+j);
}
