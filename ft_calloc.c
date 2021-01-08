/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 02:33:55 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/08 02:59:28 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int		s;
	char				*ptr;

	s = nmemb * size;
	if ((ptr = malloc(s)) == NULL)
		return (NULL);
	memset(ptr, 0, s);
	return (ptr);
}
