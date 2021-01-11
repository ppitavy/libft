/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 02:32:52 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/11 07:54:18 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isset(char c, const char *set)
{
	int		f;

	f = 0;
	while (set[f] && set[f] != c)
		f++;
	if (set[f] == '\0')
		return (0);
	return (1);
}

static char		*ft_getfull(const char *s1, char *str, int f, int i)
{
	int j;

	j = 0;
	while (j < f)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	unsigned int	f;
	unsigned int	g;
	char			*str;

	if (!s1 || !set)
		return (0);
	i = 0;
	f = 0;
	while (s1[i] && ft_isset(s1[i], set) == 1)
		i++;
	if (i == ft_strlen((char *)s1))
		return ("\0");
	while (s1[i + f])
		f++;
	g = i;
	i = i + f - 1;
	while (ft_isset(s1[i--], set) == 1)
		f--;
	if (!(str = malloc(sizeof(char) * (f + 1))))
		return (0);
	str = ft_getfull(s1, str, f, g);
	return (str);
}
