/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 01:56:52 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/11 07:52:54 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int i;

	i = ft_strlen((char *)s);
	while (s[i] && i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
