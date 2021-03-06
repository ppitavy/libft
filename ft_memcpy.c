/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 07:49:00 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/12 07:31:52 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	int				i;

	i = 0;
	t1 = (unsigned char *)dst;
	t2 = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		t1[i] = t2[i];
		i++;
		n--;
	}
	return (dst);
}
