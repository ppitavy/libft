/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 07:32:03 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/12 01:53:32 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getmal(char *str, long int nu, int *f)
{
	if (nu == 0)
		*f = 1;
	if (nu < 0)
	{
		(*f)++;
		nu = -nu;
	}
	while (nu > 0)
	{
		(*f)++;
		nu = nu / 10;
	}
	if (!(str = malloc(sizeof(char) * (*f + 1))))
		return (0);
	str[*f] = '\0';
	return (str);
}

char	*ft_getfull(char *str, long int nu, int f)
{
	if (nu < 0)
	{
		nu = -nu;
		str[0] = '-';
	}
	while (nu > 0)
	{
		str[f] = ((nu % 10) + '0');
		nu = nu / 10;
		f--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int			f;
	long int	nu;
	char		*str;

	nu = n;
	f = 0;
	str = NULL;
	if (!(str = ft_getmal(str, nu, &f)))
		return (0);
	if (nu == 0)
	{
		str[0] = '0';
		return (str);
	}
	str = ft_getfull(str, nu, f - 1);
	return (str);
}
