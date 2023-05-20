/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:43:45 by marvin            #+#    #+#             */
/*   Updated: 2022/11/04 16:02:23 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	numb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		numb = -n;
	}
	else
		numb = n;
	if (numb > 9)
	{
		ft_putnbr_fd(numb / 10, fd);
		numb %= 10;
	}
	ft_putchar_fd(numb + 48, fd);
}
