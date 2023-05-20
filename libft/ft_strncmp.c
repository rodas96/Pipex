/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:54:49 by rmorais           #+#    #+#             */
/*   Updated: 2022/10/27 22:40:03 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && n > 0 && str1[i] != '\0')
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
