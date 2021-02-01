/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 06:11:59 by ppitavy           #+#    #+#             */
/*   Updated: 2021/02/01 09:22:25 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *rendu;
	t_list *start;

	if (!f || !lst)
		return (0);
	if (!(rendu = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&lst, del);
		return (0);
	}
	start = rendu;
	lst = lst->next;
	rendu = rendu->next;
	while (lst)
	{
		if (!(rendu = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&start, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&start, rendu);
	}
	return (start);
}
