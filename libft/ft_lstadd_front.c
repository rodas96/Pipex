/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:02:56 by rmorais           #+#    #+#             */
/*   Updated: 2022/11/10 17:32:35 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = lst[0];
	lst[0] = new;
}

/* #include <stdio.h>

int main()
{
	t_list *adeus = NULL;
	
	(char *)adeus = ft_lstadd_front("adeus");
	printf("%s\n", (char *)ola->content);
	printf("%s\n", (char *)ola->next->content);
} */