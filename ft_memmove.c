/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 02:46:06 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/11 07:48:08 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	unsigned char	*t3;
	int				i;

	i = 0;
	t3 = 0;
	t1 = (unsigned char *)dest;
	t2 = (unsigned char *)src;
	while (n > 0)
	{
		t3[i] = t2[i];
		t1[i] = t3[i];
		i++;
		n--;
	}
	return (dest);
}
