/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 07:28:16 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/08 03:01:22 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*cpy;

	i = 0;
	cpy = (unsigned char *)b;
	while (i < len)
		cpy[i++] = (unsigned char)c;
	b = (void *)cpy;
	return (b);
}
