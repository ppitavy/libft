/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 06:57:21 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/12 06:56:25 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getmal(char **str, int c, const char *s, int i)
{
	int j;
	int h;

	h = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i] != c && s[i])
			{
				i++;
				j++;
			}
			if (!(str[h] = malloc(sizeof(char) * (j + 1))))
				return (0);
			h++;
		}
		else
			i++;
	}
	if (!(str[h] = malloc(sizeof(char))))
		return (0);
	return (1);
}

static char	**ft_getfull(char **str, int c, const char *s, int i)
{
	int j;
	int h;

	h = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i] != c && s[i])
			{
				str[h][j] = s[i];
				j++;
				i++;
			}
			str[h][j] = '\0';
			h++;
		}
		else
			i++;
	}
	str[h] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char **str;
	int i;
	int f;

	i = 0;
	f = 0;
	if (*s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			f++;
		}
		else
			i++;
	}
	if (!(str = malloc(sizeof(char *) * (f + 1))))
		return (0);
	if (!(ft_getmal(str, c, s, 0)))
		return (0);
	str = ft_getfull(str, c, s, 0);
	return (str);
}
