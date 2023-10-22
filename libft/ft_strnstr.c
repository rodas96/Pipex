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

const char *ft_strcontains(const char *haystack, const char *needle)
{
    size_t needle_len = ft_strlen(needle);
    size_t haystack_len = ft_strlen(haystack);
    size_t i = 0;

    while (i <= haystack_len - needle_len)
	{
        if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
            return "contains";
        i++;
    }
    return "!contains";
}