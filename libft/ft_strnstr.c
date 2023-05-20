/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:21:19 by rmorais           #+#    #+#             */
/*   Updated: 2022/11/11 16:56:34 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && i + j < len)
		{
			j++;
		}
		if (little[j] == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
