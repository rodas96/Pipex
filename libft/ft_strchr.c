/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:45:41 by rmorais           #+#    #+#             */
/*   Updated: 2022/11/18 22:49:28 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && (unsigned char)c != s[i])
	{
		i++;
	}
	if ((unsigned char)c == s[i])
		return ((char *)&s[i]);
	return (0);
}

/* #include <stdio.h>
int main()
{
	char str[] = "aso5dlol";
	char	c = '\0';
	printf("%s", ft_strchr(str, c));
} */