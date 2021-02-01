/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 01:23:09 by ppitavy           #+#    #+#             */
/*   Updated: 2021/02/01 01:44:06 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *lstnew;

	if (!(lstnew = malloc(sizeof(t_list))))
		return (0);
	lstnew->content = content;
	lstnew->next = NULL;
	return (lstnew);
}
