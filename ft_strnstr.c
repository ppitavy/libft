/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 02:56:30 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/08 05:50:24 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t			l;
	unsigned int	i;
	char			*result;

	i = 0;
	l = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[l] && s2[i] && l < len)
	{
		if (s1[l] == s2[0])
		{
			result = (char *)s1 + l;
			while (s1[l + i] == s2[i] && l + i < len)
			{
				if (s2[i + 1] == '\0')
					return (result);
				i++;
			}
			result = 0;
		}
		l++;
	}
	return (0);
}
