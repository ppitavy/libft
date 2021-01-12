/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 02:46:06 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/12 07:57:07 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cpy;

	if (!dest && !src)
		return (0);
	i = 0;
	cpy = (char *)dest;
	if (dest > src)
	{
		while (n > 0)
		{
			cpy[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			cpy[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
