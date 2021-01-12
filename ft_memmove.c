/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 02:46:06 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/12 07:37:27 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*cpy;

	if (!dest && !src)
		return (0);
	i = 0;
	cpy = (unsigned char *)dest;
	if (dest > src)
	{
		n--;
		while (n > 0)
		{
			cpy[n] = ((unsigned char *)src)[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			cpy[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
