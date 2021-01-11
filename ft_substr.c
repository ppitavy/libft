/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 02:51:40 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/11 07:45:57 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	f;
	char	*str;

	if (!s || len <= 0 || start >= (unsigned int)ft_strlen((char *)s))
		return (ft_strdup(""));
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	f = 0;
	while (s[i])
	{
		if (f < len && i >= (size_t)start)
		{
			str[f] = s[i];
			f++;
		}
		i++;
	}
	str[f] = '\0';
	return (str);
}
