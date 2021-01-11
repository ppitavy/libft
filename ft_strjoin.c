/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 07:43:07 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/11 02:23:54 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*join_init(char *str, char const *s1, char const *s2, int i)
{
	int j;

	j = 0;
	while (s1[i])
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_t;
	char	*str;

	if (!s1 || !s2)
		return (0);
	len_t = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
	if (!(str = malloc(sizeof(char) * (len_t + 1))))
		return (0);
	join_init(str, s1, s2, 0);
	return (str);
}
