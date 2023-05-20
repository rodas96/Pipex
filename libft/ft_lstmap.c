/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:25:13 by rmorais           #+#    #+#             */
/*   Updated: 2022/11/11 20:15:36 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*listanova;
	t_list	*idk;

	(void)del;
	if (!lst)
		return (NULL);
	listanova = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		idk = ft_lstnew(f(lst->content));
		lst = lst->next;
		ft_lstadd_back(&listanova, idk);
	}
	return (listanova);
}
