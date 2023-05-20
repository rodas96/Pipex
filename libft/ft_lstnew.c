/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:07:05 by rmorais           #+#    #+#             */
/*   Updated: 2022/11/10 17:32:49 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* #include <stdio.h>

int main()
{
	t_list *ola = NULL;
	t_list *adeus = NULL;
	
	ola = ft_lstnew("ola");
	adeus = ft_lstnew("adeus");
	printf("%p\n", ola);
	ola->next = adeus;
	printf("%s\n", (char *)ola->content);
	printf("%s\n", (char *)ola->next->content);
} */