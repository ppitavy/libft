/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 02:26:47 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/13 07:48:19 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	unsigned int	i;

	i = 0;
	t1 = (unsigned char *)dest;
	t2 = (unsigned char *)src;
	while (i < n)
	{
		t1[i] = t2[i];
		if (t2[i] == (unsigned char)c)
			return (dest + (i + 1));
		i++;
	}
	return (0);
}
